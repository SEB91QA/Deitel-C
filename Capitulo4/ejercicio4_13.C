/*Programa que calcula el producto de 
los enteros nones del 1 al 15*/



#include<stdio.h>
#include<math.h>


int main()
{

   int producto = 1;

   for( int i = 1; i <= 15; i += 2 )
   {

      producto *= i; 


   }

   printf("El producto de los números es: %d\n", producto);


   return 0;



}
