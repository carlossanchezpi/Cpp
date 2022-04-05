import java.util.Scanner;

public class Main {
  public static void main (String[] args){
    String nombre, apellido;
    String numeroString = "10";
    int numero1 = 10, numero2 = 20;
    boolean buleano = true;
    Scanner sc = new Scanner (System.in);

    System.out.print("Como te llamas?: ");
    nombre = sc.nextLine();
    System.out.println("Hola " + nombre + "!");

    System.out.println("Imprimo el buleano a true: " + buleano );
    buleano = false;
    System.out.println("Imprimo el buleano a false: " + buleano );


    /*//Casting automatico
    byte bytee = 9;
    short corto = bytee;
    int entero = corto;
    long largo = entero;
    float flotante = largo;
    double doble = flotante;
    // Castin manual
    int letra = 65;
    char caracter = (char)letra;
    System.out.println(caracter);
    doble = 9.85;
    entero = (int)doble;
    System.out.println(entero);
    */

    //String
    System.out.println(nombre);
    System.out.println(nombre.toUpperCase());
    System.out.println(nombre.toLowerCase());


    nombre = "Nom";
    apellido = "Ape";
    System.out.println(nombre + apellido);
    System.out.println(nombre.concat(apellido));
    System.out.println(nombre);

    System.out.println(numero1 + numero2);
    numeroString = numeroString + numero1;
    System.out.println(numeroString);
    System.out.println(numeroString + numero1 + numero2);
    System.out.println(numero1 + numero2 + numeroString);

  }
}
