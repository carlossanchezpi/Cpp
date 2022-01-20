#include <iostream>
using namespace std;

bool muchaDiferencia(int diferencia, int num1, int num2){
  return (num1-num2 > diferencia || num1-num2 < diferencia );
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
  int num;
  int pruebanum;
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

  /*while (!esCorrecto){
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
  */
  cout << "Que edad tienes: ?";
  cin >> edadIntroducida;
  if (edadIntroducida >= edad){
    cout << "Puto viejo";
  } else {
    cout << "Eres muy madura para tu edad" << endl;
  }

  diferencia = muchaDiferencia(5,edadIntroducida,edad);
  if (diferencia){
    cout << "Hay mucha diferencia de edad" << endl;
  }

  pruebanum = valorAbsoluto (-7);
  cout << pruebanum << endl;
  return 0;
}
