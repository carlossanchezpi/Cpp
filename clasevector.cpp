#include <iostream>
#include <vector>
using namespace std;


void imprimirVector(vector<double> v){
  for (int i = 0 ; i < v.size() ; i++){
    cout << v[i] << endl;
    //cout << v.at(i) << endl;
  }
}

vector<double> rellenar1a10(){
  vector<double> v;
  for (int i = 0; i < 10 ; i++){
    v.push_back(i+1);
    cout << "En el i " << i << " el tamanio es: " << v.size() << endl;
    cout << "En el i " << i << " la capacidad es: " << v.capacity() << endl;
  }
  return v;
}

int main(){
  vector<double> vectorDouble(10, 0); //Crea un vector de tamaño 10 relleno de 0
  vector<double> vectorCopia;

  vectorCopia = vectorDouble;
  vectorCopia.at(4) = 35; //Si no hay posicion 4 manda el error diciendolo, por el .at


  cout << "Vector" << endl;
  imprimirVector(vectorDouble);
  cout << "VectorCopia" << endl;
  imprimirVector(vectorCopia);
  vectorCopia = rellenar1a10();
  cout << "VectorRellenado1a10" << endl;
  imprimirVector(vectorCopia);






  return 0;
}
