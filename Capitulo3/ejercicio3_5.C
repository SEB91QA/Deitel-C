/*Suma de los enteros del 1 al 11*/

#include<stdio.h>

/*Incluimos la función main*/

int main()
{

   /*Incluimos las variables*/
   int x = 1;
   int suma = 0;

   /*Introducimos el while*/
   while( x <= 11 )
   {
      suma += x;
      ++x; 
   }

   printf("La suma total es: %d\n", suma);

   return 0;

}   
