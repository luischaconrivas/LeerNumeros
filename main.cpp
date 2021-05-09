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
  cout << "ingrese un número entre 0 y 999\n";
  cin >> numero;

        /*  Verifico que el número esté en el rango apropiados  */
  if(numero < 0 ||  numero  > 999 ){
    cout  <<  "¡El número indicado está fuera de rango!\n"
              "ejecute el programa de nuevo si desea reintentarlo.";
    return 0;
  }

    /*  descomposición de variable "numero" en: unidades, decenas y centenas.
        que se usarán como los índices (o subíndices) de los vectores apropiados
        para presentar el número en letras; sean cientos, decenas o unidades
    */
  
  indunidades = numero%10;    //indunidades representa el "índice las unidades"
  inddecenas  = numero/10%10; //inddecenas representa el "índice las decenas"
  indcentenas = numero/100%10;//indcentenas representa el "índice las centenas"

  //  cout  <<  indunidades << endl;  //  Se usará como índice del vector "unidades"
  //  cout  <<  inddecenas << endl;   //  Se usará como índice del vector "decenas"
  //  cout  <<  indcentenas << endl;  //  Se usará como índice del vector "centenas"

  if(numero < 20){
    cout  <<  unidades[numero];       //Despliegue si el número es de los primeros veinte y me salgo
    return 0;
  }

  if(numero ==  100){
    cout  <<  "cien";                 //Presentar la excepción del número 100 y me salgo
    return 0;
  }

  if(indcentenas  > 0 ){              //Si hay centenas, las despliego
    cout  <<  centenas[indcentenas];
    if(inddecenas == 0  ){            //Eavlúo si habrá centenas que desplegar
      if(indunidades  !=  0 ){        //No hay centenas ¿Quedarán unidades que desplegar?
        cout  <<  " " <<  unidades[indunidades];
      }
      return 0;
    }
    if(inddecenas == 1  ){            //Confirmé que hay centenas por desplegar, quedan dos caminos:
                                      //Si son las primeras dos decenas, uso el vector "unidades"
      cout  <<  " " <<  unidades[inddecenas*10+indunidades];
      return 0;
    }
    cout  <<  " " <<  decenas[--inddecenas];    //De lo contrario (más arriba de 2 décimos) uso vector "decenas"
    if(indunidades  !=  0 ){                    //Evalúo si quedan unidades por desplegar
      cout  <<  " y " <<  unidades[indunidades];//De ser así, las despliego
    }    
    return 0;
  }
  
  //No hay centenas, ¿Pero Habrá decenas que desplegar?

  if(inddecenas > 0 ){                                //Evalúo la presencia de decenas en "numero"
    if(inddecenas ==  1 ){                            //Sigo secuencia MUY similar a la anterior
      cout  <<  unidades[inddecenas*10+indunidades];  
      return 0;
    }
    cout  <<  decenas[--inddecenas];
    if(indunidades  !=  0 ){
      cout  <<  " y " <<  unidades[indunidades];
    }    
    return 0;
  }

  //No hay decenas, ¿Pero habrá unidades que desplegar?

  if(indunidades  != 0 ){                             //Finalizo con la evaluación de las unidades
    cout  <<  unidades[indunidades];
  }
  return 0;
}