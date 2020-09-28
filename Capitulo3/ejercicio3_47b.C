/*Cálculo del número de Euler*/
/*Aproximación a un término*/


#include<stdio.h>


int main(){


   int aprox;
   float e;

   printf("Por favor escriba la aproximación que requiere para el número e: \n");
   scanf("%d", &aprox);


   int contador1 = 1;
   int contador2 = 1;
   int factorial;
   int total_2 = 1;
   float total = 1.;
   float parcial;   

   while( contador1 <= aprox){

      while ( contador2 <= contador1){

         factorial = total_2*contador2;
         total_2 = factorial;
         contador2 = contador2 + 1;

      }


      parcial =  total + (float) (1.0/total_2);
      total = parcial;
       

      contador1 = contador1 + 1;

   }


   e = total; 

   printf("El valor de euler es de: %f\n", e );

   return 0;



}




