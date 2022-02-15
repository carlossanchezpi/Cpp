#include <iostream>
using namespace std;

int sumarNotaTeclado(int *numNotas){
  int suma = 0;
  int nota = 0;
  cout << "Introduce una nota: ";
  cin >> nota;
  for (*numNotas = 0 ; nota != -1 ; (*numNotas)++){
      suma += nota;
      cout << "Introduce una nota: ";
      cin >> nota;
  }
  return suma;
}

int main() {
    int sumaTotal;
    double media = 0;
    int numNotas;

    do {
      sumaTotal = sumarNotaTeclado(&numNotas);
      cout << "Numero de notas:" << numNotas << endl;
      cout << "Suma total:" << sumaTotal << endl;
      media = (sumaTotal)/(numNotas);
    } while (media < 5);

  cout << "La media es:" << media << endl;
    if (media >= 9){
        cout << "super apto";
    } else {
        cout << "apto";
    }
  return 0;
}

/* Rename, el nombre de las variables tendría que ser más concreto no n,s,m para saber cual es el uso del programa.
Habría que añadir algún cout << " " , que diga que hay que introducir algo por teclado.
Si la variable m > 5 la persona es apto y si es > 9 super apto.

*/
