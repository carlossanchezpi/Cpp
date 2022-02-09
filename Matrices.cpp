#include <iostream>
using namespace std;

int const TAMA = 10;
void rellenarMatrizCeros (int matriz [TAMA][TAMA], int nFil, int nCol){
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      matriz [i][j] = 0;
    }
  }
}
void rellenarMatrizNumero (int matriz [TAMA][TAMA], int nFil, int nCol, int num){
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      matriz [i][j] = num;
    }
  }
}
void rellenarMatrizTablero (string matriz [TAMA][TAMA], int nFil, int nCol){
  int cont = 1;
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      if (cont % 2 == 0){
        matriz[i][j] = "X";
        cont +=1;
      } else {
        matriz[i][j] = "O";
        cont += 1;
      }
    } cont +=1;
  }
}
void imprimirMatriz (int matriz[TAMA][TAMA], int nFil, int nCol){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			cout << matriz[i][j] << " ";
		} cout << endl;
	}
}
void imprimirMatriz (string matriz[TAMA][TAMA], int nFil, int nCol){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			cout << matriz[i][j] << " ";
		} cout << endl;
	}
}

int main(){
  int array[TAMA];
  int matriz[TAMA][TAMA];
  string matrizTablero[TAMA][TAMA];
  int num = 69;

  cout << "MatrizCEROS" << endl;
  rellenarMatrizCeros (matriz, TAMA, TAMA);
  imprimirMatriz (matriz, TAMA, TAMA);
  cout << endl;

  cout << "MatrizNumeros" << endl;
  rellenarMatrizNumero(matriz, TAMA, TAMA, num);
  imprimirMatriz(matriz, TAMA, TAMA);
  cout << endl;

  cout << "MatrizTableroXO" << endl;
  rellenarMatrizTablero(matrizTablero, TAMA, TAMA);
  imprimirMatriz(matrizTablero, TAMA, TAMA);
  cout << endl;

  return 0;
}
