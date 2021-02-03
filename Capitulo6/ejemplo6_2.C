/*Iniciación de arreglos*/


#include<stdio.h>


int main(){



   /*Lista de inicialización del arreglo*/

   int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
   int i;


   printf("%s%13s\n", "Elemento", "Valor");


   for( i = 1; i < 10; i++ ){

      printf("%7d%13d\n", i, n[ i ] );

   }


   return 0;



}

