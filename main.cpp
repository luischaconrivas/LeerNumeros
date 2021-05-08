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
          decenas[9]=   { " ","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"},
          centenas[10]= { " ","ciento","doscientos","trescientos","cuatroscientos","quinientos","seiscientos",
                          "setecientos","ochocientos","novecientos"};

    /*  variable  "numero" contendrá el valor a convertir en letras
        variable  "indunidades* contendrá el subíndice del vecctor de unidades
        variable  "inddecenas" el del vector de decenas e "indcentenas" el de centenas */
    int   numero, indunidades, inddecenas,indcentenas;

        /*  Se le solicita al usuario el ingreso del valor */
  cout << "ingrese un numero entre 0 y 999\n";
  cin >> numero;

    /*  descomposición de variable "numero" en: unidades, decenas y centenas. */
  
  indunidades = numero%10;
  inddecenas  = numero/10%10;
  indcentenas = numero/100%10;

  //  cout  <<  indunidades << endl;  //  Se usará como índice del vector "unidades"
  //  cout  <<  inddecenas << endl;   //  Se usará como índice del vector "decenas"
  //  cout  <<  indcentenas << endl;  //  Se usará como índice del vector "centenas"

  if(numero < 20){
    cout  <<  unidades[numero];   //  Despliegue si el número es de los primeros veinte
    return 0;
  }

  if(numero ==  100){
    cout  <<  "cien";             //  La excepción del número 100
    return 0;
  }

  if(indcentenas  > 0 ){
    cout  <<  centenas[indcentenas];
    if(inddecenas > 1 ){
      cout  <<  " " <<  decenas[--inddecenas];
    }
    else{
      cout  <<  " " <<  unidades[inddecenas*10+indunidades];
      return 0;
    }    
    if(inddecenas ==  0 ){
      if(indunidades  ==  0){
        return 0;
      }
      cout  <<  " " <<  unidades[indunidades];
      return 0;
    }
    cout  <<  " y " <<  unidades[indunidades];
    return 0;
  }

  if(inddecenas > 1 ){
    cout  <<  decenas[--inddecenas];
  }
  if(indunidades == 0){
    return 0;
  }
  cout  <<  " y " <<  unidades[indunidades];
  return 0;
  







/*

    if(indunidades != 0 ){
      cout  <<  " " <<  unidades[indunidades];
      return 0;
    }
  }

  
  
  
  if(inddecenas > 1 ){
      cout  <<  decenas[--inddecenas];
    }
    if(indunidades != 0 ){
      cout  <<  " " <<  unidades[indunidades];
      return 0;
    }
  
*/



/*
  if(inddecenas ==  0 &&  indunidades ==  0){
    return 0;
  }

  if(indcentenas  ==  0 ){
    if(inddecenas > 1 ){
      cout  << decenas[--inddecenas];

    }
    if(inddecenas < 2 ){
      cout  <<  unidades[indunidades];
      return 0;
    }
    cout  <<  decenas[--inddecenas];
    if(indunidades  !=  0){
      cout  <<  "y" <<  unidades[indunidades];
    }

  }
*/





/*
  if(inddecenas ==  1){
    cout  <<  " " <<  unidades[inddecenas*10+indunidades];
    return 0;
  }

  if(indunidades  !=  0){
    if(indcentenas  > 0){
      cout  <<  " "  <<  decenas[--inddecenas] <<  " y " <<  unidades[indunidades];
      return 0;
    }
    cout  <<  decenas[--inddecenas] <<  " y " <<  unidades[indunidades];
    return 0;
  }

  if(indcentenas  ==  0){
    cout  <<  decenas[--inddecenas];
    return 0;
  }
  cout  <<  " " <<  decenas[--inddecenas];

  */

  return 0;
  //cout  <<  centenas[--indcentenas] <<  " " <<  decenas[--inddecenas] <<  " y "<< unidades[indunidades];
  
}