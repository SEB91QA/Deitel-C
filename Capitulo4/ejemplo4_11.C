/*Ejemplo de la instrucción 
continue*/



#include<stdio.h>

int main()
{

   int x;                               /*Contador*/


   for( x = 1; x <= 10; x++)
   {

      if( x == 5)
      {

         continue;

      }

      printf("%d ", x);

   }

   printf("se utilizó la operación continue para ignorar la impresión del valor 5\n");


   return 0;


}

