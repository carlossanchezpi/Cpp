// Referencias y punteros.

#include <iostream>
using namespace std;
int suma10 (int num){
  num += 10;
  return num;
}

int suma10 (int* ptrNum){
  *ptrNum += 10;
  return *ptrNum;
}


int main(){
  /// Tercera parte
  string line;
  string* colores = NULL;
  cout << "Valor de colores = NULL: " << colores << endl;

  int numero;
  cout << "Cuantos colores quieres: ";
  getline(cin,line);
  numero = stoi(line);

  colores = new string [numero];
  cout << "Valor de colores = new string[numero]: " << colores << endl;

  for (int i = 0 ; i < numero ; i++){
    cout << "Dime un color: ";
    getline(cin,colores[i]);
  }

  for (int i = 0 ; i < numero ; i++){
    cout << colores[i] << " " << endl;
  }

  delete [] colores;

  for (int i = 0 ; i < numero ; i++){
    cout << colores[i] << " " << endl;
  }

  //// Segunda parte
  /*
  int numero = 10;
  int resultado;
  cout << "Imprimir numero: " << numero << endl;
  resultado = suma10(numero);
  cout << "Imprimir numero despues de sumar10(int): " << numero << endl;
  cout << "Imprimir resultado despues de sumar10(int) " << resultado << endl;

  cout << "Imprimir numero: " << numero << endl;
  resultado = suma10(&numero);
  cout << "Imprimir numero despues de sumar10(*int): " << numero << endl;
  cout << "Imprimir resultado despues de sumar10(*int) " << resultado << endl;


  /// Primera parte
  /*string juego = "Tetris";
  string &ocio = juego;
  int num = 5;
  //string juegos[5];
  string* ptrJuego = &juego; //& indica la posicion de memoria
  string* ptrOcio = &juego;
  int* ptrNum = &num;
  /*cout << juego << endl; // Imprime Tetris. */

  /*cout << "Imprimo el juego: " << juego << endl;
  cout << "Imprimo el &juego: " << &juego << endl;
  // cout << "Imprimo *juego: " << *juego << endl; #Este no funciona
  cout << "Imprimo el ocio: " << ocio << endl;
  cout << "Imprimo el &ocio: " << &ocio << endl;
  cout << "Imprimo el ptrJuego: " << ptrJuego << endl;
  cout << "Imprimo el &ptrjuego: " << &ptrJuego << endl;
  cout << "Imprimo el *ptrJuego: " << *ptrJuego << endl;
  cout << "Imprimo el num: " << num << endl;
  cout << "Imprimo el *ptrNum: " << *ptrNum << endl;
  cout << "Imprimo el &num: " << &num << endl;
  cout << "Imprimo el ptrNum: " << ptrNum << endl;
  */
  return 0;
}
