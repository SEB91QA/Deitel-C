/*Cálculo de una exponencial*/


#include<stdio.h>
#include<math.h>


int main(){


   int exp;
   int cota = 10;
   double e;

   printf("Por favor introduzca el exponente para el valor de e\n");
   scanf("%d", &exp);


   int contador1 = 1;
   int contador2 = 1;

   int factorial;
   int total_2 = 1;
   double total = 1.;
   double parcial;

   while( contador1 <= cota){

      while( contador2 <= contador1){

         factorial = total_2*contador2;
         total_2 = factorial;

         contador2 = contador2 + 1;

      }

      int x = pow(exp, contador1);
      

      parcial = total + (double) x/factorial;
      total = parcial;

      printf("%f\n", parcial);

      contador1 = contador1 + 1;

   }

   e = parcial;

   printf("El valor de e a la x es: %.4f\n", e);


   return 0;

}



