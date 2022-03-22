#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre;
    string dni;
  public:
    Persona(string nombre = "nombrePersona", string dni = "dniPersona"){
      this->nombre = nombre;
      this->dni = dni;
    }
    ~Persona(){
      cout << "Adios" << endl;
    }
    void imprimir(){
      cout << "Me llamo " << this->nombre << " y mi dni es " << this->dni << "." << endl;
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
/*
CUANDO DEFINIMOS ATRIBUTOS Y METODOS.
Public: se puede acceder desde cualquier parte
Protected: solo accesible desde la clase y sus descendientes.
Private: solo accesible desde la clase donde se define.
--------------------
CUANDO DEFINIMOS LA HERENCIA DE UNA CLASE.
Public:
  private: no podemos acceder
  protected: protegido.
  public: publico
Protected:
    private: no podemos acceder
    protected: protegido.
    public: protegido
Private:
  private: no podemos acceder
  protected: privado
  public: privado
*/
class Alumno : public Persona{
  private:
    string clase;
    int curso;
  public:
    Alumno(string nombre = "nombreAlum", string dni = "dniAlum", string clase = "claseAlum", int curso = 1) : Persona (nombre,dni){
      this->clase = clase;
      this->curso = curso;
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
    int getCurso(){
      return this->curso;
    }
    void imprimir(){
      //this->imprimir(); no podemos llamar al imprimir del padre porque estamos especializando la func ahora.
      Persona :: imprimir();
      //cout << "Me llamo " << getNombre() << "y mi dni es " << getDni() << endl;
      cout << "Estoy en el grado " << this->clase << " Y mi curso es " << this->curso << "." << endl;
    }
};
int main(){
  //Persona miPersona;
  Alumno alumnoDef;
  Alumno miAlumno("polla","dni122","asd",4);
  Alumno* ptrAlumno;
  ptrAlumno = new Alumno("ptrNombre","ptrDni","ptrClase",1);
  alumnoDef.imprimir();
  miAlumno.imprimir();
  ptrAlumno->imprimir();
  //miPersona.imprimir();
  return 0;
}
