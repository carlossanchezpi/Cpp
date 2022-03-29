#include <iostream>
using namespace std;
#include <vector>


class Mueble{
  protected:
    string material;
    float ancho;
    float alto;
    float largo;
  public:
    Mueble(string material ="plastico", float ancho = 10, float alto = 10 , float largo = 10){
      this->material = material;
      this->ancho = ancho;
      this->alto = alto;
      this->largo = largo;
    }
    ~Mueble(){
      cout << "Adios" << endl;
    }
    void setMaterial(string material){
      this->material = material;
    }
    void setAncho(float ancho){
      this->ancho = ancho;
    }
    void setAlto(float alto){
      this->alto = alto;
    }
    void setlargo(float largo){
      this->largo = largo;
    }
    string getMaterial(){
    return this->material;
    }
    float getAncho(){
    return this->ancho;
    }
    float getAlto(){
    return this->alto;
    }
    float getLargo(){
    return this->largo;
    }
};

class Mesa : public Mueble{
  protected:
    int numeropatas;
    string forma;
  protected:
    Mesa(int numeroPatas = 4, string forma ="normal", string material ="plastico", float ancho = 10, float alto = 10, float largo = 10  ) : Mueble (material,ancho,alto,largo){
      this->numeropatas = numeropatas;
      this->forma = forma;
    }
    void setNumeropatas(int numeropatas){
      this->numeropatas = numeropatas;
    }
    void setForma(int forma){
      this->forma = forma;
    }
    int getNumeropatas(){
      return this->numeropatas;
    }
    string getForma(){
      return this->forma;
    }


};
class Armario : protected Mueble{


};
int main(){





  return 0;
}
