#include <iostream>
using namespace std;

class Rectangulo {
private:
  double base;
  double altura;
public:
  //Constructor
  Rectangulo(double base = 1, double altura = 1){
    //this->base = base;
    //this->altura = altura;
    setBase(base);
    setAltura(altura);
  }
  void setBase(double base){
    (base > 0) ? this->base = base: this->base = 1;
  }
  void setAltura(double altura){
    (altura > 0) ? this->altura = altura : this->altura = 1;
  }
  double getBase(){
    return this->base;
  }
  double getAltura(){
    return this->altura;
  }
  //Metodos
  double area(){
    return this->base*this->altura;
  }
  //Imprimir
  void imprimir(){
    cout << "La base es " << this->base << " y la altura es " << this->altura << endl;
  }
};
class Circulo{
private:
  double radio;
  const double PI = 3.14159;
public:
  //Constructor
  Circulo(double radio = 1, double PI = 1){
    setRadio(radio);
    setPI(PI);
  }
  void setRadio(double radio){
    (radio > 0) ? this->radio = radio: this->radio = 1;
  }
  void setPI(double PI){
    this->PI;
  }
  double getRadio(){
    return this->radio;
  }
  double getPI(){
    return this->PI;
  }
  //Metodos
  double areaCirculo(){
    return this->PI*this->radio*this->radio;
  }
};


int main(){

  Rectangulo folio(5,2);
  Rectangulo tablero;
  Rectangulo manta(4);
  double areaFolio;
  Circulo pelota;
  double areaPelota;

  cout << "Folio: " << endl;
  folio.imprimir();
  folio.setBase(2);
  folio.setAltura(3);
  folio.imprimir();
  areaFolio = folio.area();
  areaPelota = pelota.areaCirculo();
  cout << "El area del folio es: " << areaFolio << endl;
  cout << "Tablero: " << endl;
  tablero.imprimir();
  cout << "Manta: " << endl;
  manta.imprimir();
  cout << "Area pelota: " << areaPelota << endl;

  return 0;
}
