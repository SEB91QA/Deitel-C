/*Escriba un programa que calcule e imprima la suma de los
enteros pares del 2 al 30*/


#include<stdio.h>
#include<math.h>



int main()
{


   int suma = 0;

   for( int i = 2; i <= 30; i += 2)
   {

   
      suma += i;


   }


   printf("La suma total es: %d\n", suma);



   return 0;


}
