#include <iostream>
#include <vector>
using namespace std;
// https://www.cplusplus.com/reference/vector/vector/
void mostrarVector (vector<int> vector){
  int i;
  cout << "[";
  for (i = 0 ; i < vector.size()-1 ; i++){
    cout << vector[i] << ", "; //vector.at(i)
  }
  cout << vector[i] << "]";
}

vector<int> rellenarVector(){
  vector<int> vector;
  int numero, tama;

  cout << "Cuantos numeros quieres introducir: ";
  cin >> tama;
  for ( int i = 0 ; i < tama ; i++){
    cout << "Introduce un numero" << endl;
    cin >> numero;
    vector.push_back(numero);
  }
  return vector;
}

int main(){
  // Sin inicializar
  vector<int> miVector1;
  vector<string> miVectorS;
  // Inicializa un vector de tamaño 10 relleno de 2.
  vector<int> miVector2(10,2);
  // Inicializa un vector con los valores introducidos.
  vector<int> miVector3{1,2,3,4,5}; //Mejor manera de hacerlo
  /*vector<int>*/  miVector3 = {1,2,3,4,5}; //Otra manera pero peor
  miVector3 = {1,2,3,4,5};
  miVectorS = {"La casa verde"};
  cout << miVectorS[0] << endl;

  miVector2 = rellenarVector();
  mostrarVector(miVector2);


  return 0;
}
