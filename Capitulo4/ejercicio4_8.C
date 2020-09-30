/*Ejercicio 4.8*/


#include<stdio.h>


int main()
{


   int x;
   int y;
   int i;
   int j;

  
   printf("Imprima dos números enteros del 1 al 20: ");
   scanf("%d%d", &x, &y);


   for( i = 1; i <= y; i++)
   {

      for( j = 1; j <= x; j++)
      {

         printf("@");

      }

      printf("\n");

   }

   return 0;


}



