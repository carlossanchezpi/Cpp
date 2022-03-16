#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre;
    string dni;
  public:
    Persona(string nombre = "Celia", string dni = "014785Y"){
      this->nombre = nombre;
      this->dni = dni;
    }
    ~Persona(){
      cout << "Adios" << endl;
    }
    void imprimir(){
      cout << "Me llamo " << this->nombre << "y mi dni es " << this->dni << "." endl;
    }
    void setNombre(string nombre){
      this->nombre = nombre;
    }
    void setDni(string dni){
      this->dni = dni;
    }
    string getNombre(){
      return this->nombre;
    }
    string getDni(){
      return this->dni;
    }
};
class Alumno : public Persona{
  private:
    string clase;
    int curso;
  public:
    Alumno(string clase = "DAW", int curso = 1){
      this->clase = clase;
      this->curso = curso;
    }
    void imprimir(){

      //this->imprimir(); no podemos llamar al imprimir del padre porque estamos especializando la func ahora.
      //cout << "Me llamo " << getNombre() << "y mi dni es " << getDni() << endl;
      cout << "Estoy en el grado" << this->clase << "Y mi curso es " << this->curso << "." << endl;
    }
    void setClase(string clase){
      this->clase = clase;
    }
    void setCurso(int curso){
      this->curso = curso;
    }
    string getClase(){
      return this->clase;
    }
    string getCurso(){
      return this->curso;
    }
};
int main(){
  //Persona miPersona;
  Alumno miAlumno;
  miAlumno.imprimir();
  //miPersona.imprimir();
  return 0;
}
