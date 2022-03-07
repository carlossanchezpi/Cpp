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

double* rellenarArrayNotas (int tama){
  double* array = new double [tama];
  string line;
  for (int i = 0 ; i < tama ; i++){
    cout << "Dime una nota: ";
    getline(cin,line);
    array[i] = stod(line);
  }
  return array;
}

double* subirNotaArray (double* array, int tama, double porcentaje){
  double* nuevoArray = new double[tama];
  for (int i = 0 ; i < tama ; i++){
    nuevoArray[i] = array[i]*(1+(porcentaje/100));
  }
  return nuevoArray;
}


string* rellenarArray(int tama){
  string* array = new string [tama];
  for (int i = 0 ; i < tama ; i++){
    cout << "Dime un color: ";
    getline(cin,array[i]);
  }
  return array;
}

/* void rellenarArray(int tama, string array[]){
  for (int i = 0 ; i < tama ; i++){
    cout << "Dime un color: ";
    getline(cin,array[i]);
  }
}
*/
void imprimirArray(string* array, int tama){ //string* array y string array[] es lo mismo
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << " " << endl;
  }
}

void imprimirArray(double* array, int tama){ //string* array y string array[] es lo mismo
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << " " << endl;
  }
}

int main(){
  /// Tercera parte
  string line;
  string* colores = NULL;
  double* notas = NULL;
  double* nuevasNotas = NULL;
  double porcentaje = 20;
  cout << "Valor de colores = NULL: " << colores << endl;

  int numero;
  cout << "Cuantos colores quieres: ";
  getline(cin,line);
  numero = stoi(line);

  colores = new string [numero];
  //cout << "Valor de colores = new string[numero]: " << colores << endl;

  //colores = rellenarArray (numero);
  //imprimirArray (numero, colores);

  notas = rellenarArrayNotas(numero);
  imprimirArray (notas, numero);

  nuevasNotas = subirNotaArray(notas, numero, porcentaje);
  imprimirArray (nuevasNotas, numero);

  delete [] colores;
  colores = NULL;

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
