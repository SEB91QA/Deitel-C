/*Ejercicio 4.18*/



#include<stdio.h>
#include<math.h>



int main()
{


   int n;

   printf("Por favor introduzca un entero entre 1 y 30: ");

   for( int i = 1; i <= 5; i++)
   {    
      
      scanf("%d", &n);

      for( int c = 1; c <= n; c++)
      {

         printf("*");

      }

      printf("\n");


   }



   return 0;





}




