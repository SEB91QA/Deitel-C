/*Cálculo de interés compuesto
a 10 años*/




#include<stdio.h>
#include<math.h>


int main(){


   double monto;                    /*Monto del deposito*/   
   double principal = 1000.0;       /*Monto principal*/
   double tasa = 0.05;              /*Tasa anual*/
   int anio;                        /*Año*/


   /*Muestra el encabezado de la salida de la tabla*/
   printf("%4s%21s\n", "Anio", "Monto del depósito");

   
   /*Cálculo del monto del depósito para cada uno de los años*/
   for (anio = 1; anio <= 10; anio++){


      monto = principal * pow(1.0 + tasa, anio);
      printf( "%4d%21.2f\n", anio, monto );

   }

   return 0;


}




