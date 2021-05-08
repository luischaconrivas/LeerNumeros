//

#include <iostream>
/*
8 de mayo del 2021
Práctica #2 del Curso Programación con C++
Estudiante: Luis Angel Chacón Rivas
email:      luischaconrivas@gmail.com
*/
using namespace std;
int main() {
    /*  definición e iniciado de vectores con los números en letras:
        unidades contiene cómo se escriben los números del 0 al 20
        decenas contiene cómo se escriben los números del 20 al 90
        centenas contiene cómo se escriben los números del 200 al 900
    */
  string  unidades[20]= { "cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","diez",
                          "once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"},
          decenas[8]=   { "veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"}
          centenas[10]= { "ciento","doscientos","trescientos","cuatroscientos","quinientos","seiscientos",
                          "setecientos","ochocientos","novecientos"};

    /*  variable "numero" contendrá el valor a convertir en letras
        variabe "indunidades* contendrá el subíndice del vecctor de unidades
        variable "inddecenas" el del vector de decenas e "indcentenas" el de centenas */
    int   numero, indunidades, inddecenas,indcentenas;

        /*  Se le solicita al usuario el ingreso del valor */
  cout << "ingrese un numero entre 0 y 999";
  cin >> numero;

    /*  descopmposición de variable "numero" en: unidades, decenas y centenas. */







  cout << "Hello World!\n";
  return 0;
}