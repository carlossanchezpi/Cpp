#include <iostream>
//#include <stdlib.h>
//#include <time.h>
using namespace std;

void imprimirArray(int array[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << endl;
  }
}

void rellenarArray (int nume[], int tama){
  for (int i = 1 ; i < tama ; i++){
    nume[i] = 0;
  }
}

int main() {
  //Ejercicio 1

  string nombre = "Carlos Sanchez Pinia";
  cout << nombre << endl;

  int vector[10];
  int i;
  int nume[10];
  int tama=10;


  //Ejercicio 2.1
  cout << endl;
  for(i=0; i<=9; i++){
    cout<<"Introduce un numero mayor que 5 (SI NO REINICIA EL PROGRAMA)\n";
    cin>>vector[i];
    if(vector[i]<5){
      cout<<"ERROR!!!!! El numero tiene que ser mayor que 5\n";
      return 0;
    }
  }

  for(i=0; i<=9; i++){
    cout<<vector[i]<<" ";
  }

  cout << endl;

  //Ejercicio 2.2

  nume[0]=1;

  rellenarArray (nume, tama);
  imprimirArray(nume, tama);

  //Ejercicio 3 ..............

  /*Ejercicio 4:
   Usando la funcion rand() podría ser una opción, habría que añadir las librerías necesarias comentadas arriba.
  */




  return 0;


}
