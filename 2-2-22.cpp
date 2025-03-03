#include <iostream>
using namespace std;

void solicitarContrasena(string clave){
  string palabra;
  int count = 0;

  /* FORMA FEA
  cout << "Quiero comer crustaceo...";
  cin >> palabra;
  while(clave != palabra){
    count += 1;
    if (count != 5){
      cout << "Quiero comer crustaceo...";
      cin >> palabra;
    } else {
      cout <<  "SUBNORMAAAAAAAAAAAA Quiero comer crustaceo...";
      cin >> palabra;
    }
  }
  */

  cout << "Quiero comer crustaceo...";
  cin >> palabra;
  for(int i = 0 ; clave != palabra && i < 3 ; i++){
    cout << "Dame mejor crustaceos subnormal";
    cin >> palabra;
  }
  for (int i = 0 ; clave != palabra && i < 10 ; i++){
    cout << "Es que eres tonto? Que lo que quiero son crustaceooooooooooos!!!";
    cin >> palabra;
  }
  if (clave != palabra) cout << "El pulpo se cabreo y se suicido";
}

  /*
  do{
    cout << "Quiero comer crustaceo...";
    cin >> palabra;
  } while (clave != palabra);
  */

int aBase8 (int numero){
  int decenas;
  int unidades;
  if (numero > 64){
     cout << "No estamos preparados para trabajar la recurrencia todavia"; // Si solo ponemos una linea no hace falta corchetes en el if
     numero = -1;
  }
  else{
    unidades = numero%8;
    decenas = numero/8;
    numero = decenas*10 + unidades;
  }
  return numero;
}

void imprimirLista(string lista[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << lista[i] << endl;
  }
}

void imprimirLista(char lista[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << lista[i] << endl;
  }
}

void imprimirLista(int lista[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << lista[i] << endl;
  }
}


void pasarLista(string lista[], int tama, char listaFaltas[]){
  string respuesta;
  for (int i = 0 ; i < tama ; i++){
    cout << "Está "<< lista[i] << "en clase" << endl;
    cin >> respuesta;
    if (respuesta == "no") listaFaltas[i] = 'V'; /// solo una comila '' en la V porque es un char declarado char
    else listaFaltas[i] = 'F';
  }
}

  void reorganizarComida (int pecerasComida[], int tama){
    int sobran = 0;
    for (int i = 0 ; i < tama ; i++){
      pecerasComida[i] += sobran;
      sobran = pecerasComida[i]%3;
      pecerasComida[i] -= sobran;
    }
  }

  int posicionDatoMenor(int lista[], int tama){
    int menor = lista[0];
    int posicion = 0;
    for (int i = 1; i < tama ; i++){
      if (lista[i] < menor){
        menor = lista[i];
        posicion = i;
      }
    }
    return posicion;
  }

  void reorganizarComidaDeOtraForma (int pecerasComida[], int tama){
    int sumaSobran = 0;
    int sobran = 0;
    int posicion;
    for (int i = 0 ; i < tama ; i++){
      sobran = pecerasComida[i]%3;
      pecerasComida[i] -= sobran;
      sumaSobran += sobran;
    }
    posicion = posicionDatoMenor(pecerasComida, tama);
    pecerasComida[posicion] += sumaSobran;
  }


int main() {
  string contrasena = "crustaceo";
  int numero;
  int numeroBase8;
  int tamaLista = 5;
  string listaPulpos[] = {"A" , "B" , "C" , "D" , "E"}; /// [] para indicar que es una lista al string
  char listaFaltas[tamaLista];
  int crustaceos[] = {23, 74, 92, 64, 27, 13, 84, 73};


  cout << "Carlos Sanchez Piña" << endl;

  ///Ejercicio 1

  solicitarContrasena(contrasena);


  /// Ejercicio 2

  cout << "Introduce un numero";
  cin >> numero;
  numeroBase8 = aBase8(numero);
  cout << numeroBase8 << endl;


  /// Ejercicio 3
  imprimirLista(listaPulpos, tamaLista);
  cout << endl;
  pasarLista(listaPulpos, tamaLista, listaFaltas);
  cout << endl;
  imprimirLista(listaFaltas, tamaLista);


  ///Ejercicio 4
  imprimirLista(crustaceos, 8);
  cout << endl;
  reorganizarComida (crustaceos, 8);
  imprimirLista(crustaceos, 8);
  cout << endl;
  reorganizarComidaDeOtraForma (crustaceos, 8);
  imprimirLista(crustaceos, 8);

  return 0;

}


/// Funcion hasta que la persona escriba -1 y los guarde y luego sacar cual es el mayor, el menor y la media de los numeros que se escriban
