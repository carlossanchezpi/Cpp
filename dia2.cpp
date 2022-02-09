#include <iostream>
using namespace std;

bool muchaDiferencia(int diferencia, int num1, int num2){
  return (num1-num2 > diferencia || num1-num2 < diferencia );
<<<<<<< HEAD
=======
}

int valorAbsoluto(int num){
  if (num < 0){
    return (num * (-1));
  } else {
    return num;
  }
}

bool meSirve (int numMax, int numMin, int num){
  return (numMin <= num && num <= numMax);
}

bool meSirveDos (int numMax, int numMin, int num){
  return (numMin >= num || num >= numMax);
}
void imprimeBool (bool b){
  if (b == 0){
    cout << "False";
  } else {
    cout << "True";
  }
>>>>>>> f4df8fde5f1e5ee3a0d02aacc6220e4095c222aa
}

int valorAbsoluto(int num){
  if (num < 0){
    return (num * (-1));
  } else {
    return num;
  }
}
int main(){
  string saludo = "Hola";
  string repetir;
  string contrasena = "aaaa";
  bool esCorrecto = false;
  bool diferencia;
  int edad = 26;
  int edadIntroducida;
<<<<<<< HEAD
  int num;
  int pruebanum;
=======
  int pruebanum;
  int suma = 0;
  bool ok;
  int numM, numm, num;
>>>>>>> f4df8fde5f1e5ee3a0d02aacc6220e4095c222aa
  /*cout << "Imprimir por pantalla" << endl;
  cout << "Imprimir por pantalla\n";
  cout << "Comprobacion de salto de linea";
  cout << saludo << endl;
  */
  /*
  while (true){
  cout << "Introduce una palabra: ";
  cin >> repetir;
  cout << repetir << endl;
  }
  */
  /*
    while (!esCorrecto){
    cout << "Introduce la contraseña: ";
    cin >> repetir;
    if (repetir == contrasena){
      esCorrecto = true;
    }
  }


  repetir = "";
  while (repetir != contrasena){
    cout << "Introduce la contraseña: ";
    cin >> repetir;
  }

  cout << "Que edad tienes: ?";
  cin >> edadIntroducida;
  if (edadIntroducida >= edad){
    cout << "Puto viejo";
  } else {
    cout << "Eres muy madura para tu edad" << endl;
  }
  */
  /*
  diferencia = muchaDiferencia(5,edadIntroducida,edad);
  if (diferencia){
    cout << "Hay mucha diferencia de edad" << endl;
  }

  pruebanum = valorAbsoluto (-7);
  cout << pruebanum << endl;
<<<<<<< HEAD
=======
  */
  /*
 // PEOR forma de hacer esto
  repetir = "";
  while (repetir != contrasena){
    cout << "Introduce la contraseña: ";
    cin >> repetir;
  }

// Mejor forma de hacer esto
  do{
    cout << "Introduce la contraseña: ";
    cin >> repetir;
  } while (repetir != contrasena);
  */

  // Bucle for basico que sume del 1 al 100
  // Python ---
  // Suma = 0
  // for numero in range(0,101):
  //    suma += numero
  // CON UN while
  // numero = 1
  // suma = 0
  // while (numero <= 100)
  // suma += numero
  // numero += 1

  //for(int i = 0 ; i <= 100 ; i++){ //Esto hace lo mismo que el for de arriba de python (++ es +1 en c++)
  //  cout << "La i vale: " << i << endl;
  //  suma += i;
  //}
  //cout << "La suma de los 100 primeros numeros es: " << suma << endl;

  // Sumar 500 primeros numeros pares

  // Forma buena
  for(int i = 0 ; i <= 500 ; i+=2){
    cout << i << endl;
    suma += i;
  }
  cout << "La suma total (metodo bueno) es: " << suma << endl;

  // Forma gitana
  suma = 0;
  for (int i = 1 ; i <= 500 ; i++){
    if (i%2 == 0){
      suma += i;
    }
  }
  cout << "La suma total (metodo feo) es: " << suma << endl;

  int arr[] = {10,20,30,40}; //Esto es una lista en c se les llama array
  for (int i : arr){
    cout << i << endl;
  }

  numM = 30;
  numm = 10;
  cout << "Introduce un numero: ";
  cin >> num;
  ok = meSirve (numM,numm,num);
  imprimeBool(ok);
  ok = meSirveDos (numM,numm,num);
  imprimeBool(ok);
>>>>>>> f4df8fde5f1e5ee3a0d02aacc6220e4095c222aa
  return 0;
}
