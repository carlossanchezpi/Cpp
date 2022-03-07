#include <iostream>
using namespace std;

void rellenarArray (int nume[], int tama){
  for (int i = 0 ; i < tama ; i++){
    nume[i] = i;
  }
}

void imprimirLista(int array[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << endl;
  }
}
int* invertirLista(int* ptrLista, int tama){
  int* ptrNuevaLista = new int[tama];
  for (int i = 0, j = tama-1 ; i < tama ; i++, j--){
    ptrNuevaLista[i] = ptrLista[j];
  }
  return ptrNuevaLista;
}
int* copiarLista (int* ptrLista, int tama){
  int* ptrNuevaLista = new int[tama];
  for (int i = 0; i < tama ; i++){
    ptrNuevaLista[i] = ptrLista[i];
  }
  return ptrNuevaLista;
}
int posMinimoLista(int* ptrLista, int tama){
  int posicion = 0;
  int minimo = ptrLista[0];
  for (int i = 0; i < tama ; i++){
    if (ptrLista[i] < minimo){
      minimo = ptrLista[i];
      posicion = i;
    }
  }
  return posicion;
}
int* ordenarLista (int* ptrLista, int tama){
  int* ptrCopiaLista = copiarLista(ptrLista, tama);
  int* ptrOrdenadaLista = new int[tama];
  int tamaMax = 20;
  int posicionMin;
  for (int i = 0; i < tama ; i++){
    posicionMin = posMinimoLista(ptrCopiaLista, tama);
    ptrOrdenadaLista[i] = ptrCopiaLista[posicionMin];
    ptrCopiaLista[posicionMin] = tamaMax;
  }
  return ptrOrdenadaLista;
}


int main(){
  int* ptrArray1;
  int* ptrArray2; //Array invertido
  int* ptrArray3; //Array ordenado
  int tama = 5;
  cout << "Carlos Sanchez Pinia" << endl;
  cout << "Generar lista aleatoria: " << endl;
  ///ptrArray1 = crearListaAleatoria(tama);
  imprimirLista(ptrArray1, tama);
  //cout << "Cambiar por doble" << endl;
  //cambiarPorDobleLista(ptrArray1, tama, 3);
  int pos = posMinimoLista(ptrArray1, tama);
  cout << "Posicion minimo: " << pos << endl;
  cout << "Lista Ordenada: " ;
  ptrArray3 = ordenarLista(ptrArray1, tama);
  imprimirLista(ptrArray3, tama);
return 0;
}
