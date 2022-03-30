#include <iostream>
using namespace std;
class Juego{
  private:
    string nombre;
  protected:
    double precio;
  public:
    Juego(string nombre = "nombreJuego", double precio = 10){
      this->nombre = nombre;
      this->precio = precio;
    }
    ~Juego(){
      //cout << "Adiosjuego" << endl;
    }
    void setNombre(string nombre){
      this->nombre = nombre;
    }
    void setPrecio(double precio){
      this->precio = precio;
    }
    string getNombre(){
      return this->nombre;
    }
    double getPrecio(){
      return this->precio;
    }
    void imprimir(){
      cout << "El nombre del juego es: " << this->nombre << " y su precio es: " << this->precio << " euros" << endl;
    }
    double descuento(){
      return this->precio - 10;
    }
    void imprimirDescuento(){
      cout << "El precio del juego con descuento es: " << descuento() << " euros" << endl;
    }
};
class Videojuego : protected Juego{
  private:
    string plataforma;
  public:
    Videojuego(string plataforma = "plataformaDefecto", string nombre = "nombreVideojuego", double precio = 60) : Juego (nombre,precio){
      this->plataforma;
    }
    ~Videojuego(){
      //cout << "AdiosVideojuego" << endl;
    }
    void setPlataforma(string plataforma){
      this->plataforma = plataforma;
    }
    string getPlataforma(){
      return this->plataforma;
    }
    /*
    void descuentoVideojuego(){
      if (this->precio / 0.20 >= descuento()){
        cout << "El descuento es distinto" << nuevodescuento << endl;
      } else {
        cout << "El descuento es el original" << descuento();
      }
    }
    */
    /*
    void imprimirVideojuego(){
      cout << imprimir() << " es para la plataforma " << this->plataforma;
    }
    */
};

class Juegodemesa : public Juego{
  private:
    int maximo;
    int minimo;
  public:
    Juegodemesa(int maximo = 10, int minimo = 10, string nombre = "nombreJuegodemesa", double precio = 30) : Juego (nombre,precio){
      this->maximo;
      this->minimo;
    }
    ~Juegodemesa(){
      //cout << "AdiosJuegodemesa" << endl;
    }
    void setMaximo(int maximo){
      this->maximo = maximo;
    }
    void setMinimo(int minimo){
      this->minimo = minimo;
    }
    int getMaximo(){
      return this->maximo;
    }
    int getMinimo(){
      return this->minimo;
    }
    void jugable(int numJugadores){
      if (numJugadores <= this->maximo){
        cout << "El juego es jugable" << " con " << numJugadores << " jugadores" << endl;
      }else{
        cout << "El juego no es jugable ya que el maximo de jugadores es: " << this->maximo << endl;
      }
    }
};



int main(){

Juego juego;
Videojuego videojuego;
Juegodemesa juegodemesa;
int jugadores = 5;
cout << "Carlos Sanchez Pinya" << endl;
cout << " -------------------------------Juego--------------------------------------" << endl;
juego.imprimir();
juego.imprimirDescuento();

cout << " -------------------------------VideoJuego--------------------------------------" << endl;
cout << " Tendria que haber creado variables distintas pero me he dado cuenta al final y ya no me da tiempo" << endl;
// videojuego.setNombre("Elden Ring"); // No se pueden llamar porque está en private y hemos declarado la herecencia protected
//videojuego.setPrecio(60);
//videojuego.imprimir();
//videojuego.imprimirDescuento();
cout << " -------------------------------JuegodeMesa--------------------------------------" << endl;
// Aqui igual para el atributo nombre pero lo leí mal.
juegodemesa.setMaximo(4);
juegodemesa.setMinimo(2);
juegodemesa.setNombre("Bang");
juegodemesa.setPrecio(20);
juegodemesa.imprimir();
juegodemesa.jugable(jugadores);


  return 0;
}
