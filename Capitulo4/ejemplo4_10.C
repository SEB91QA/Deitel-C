/*Ejemplo de la instrucción break*/


#include<stdio.h>



int main()
{


   int x;   /*Contador*/

   /*Repetición del ciclo*/

   for( x = 1; x <= 10; x++){

      if( x == 5){
  
         break;

      }

      printf("%d ", x);

   }

   printf("\nRompe el ciclo en x = %d\n", x );

   return 0;



}







