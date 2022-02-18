#include <iostream>
using namespace std;

void rellenarArray (int nume[], int tama){
  for (int i = 0 ; i < tama ; i++){
    nume[i] = i;
  }
}

void imprimirArray(int array[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << endl;
  }
}

int main(){
  int tama = 5;
  int nume[] = {1,2,3,4,5,6,7,8,9,10};


  cout << "Carlos Sanchez Pinia" << endl;

  //rellenarArray(nume, tama);
  imprimirArray(nume, tama);

return 0;
}
