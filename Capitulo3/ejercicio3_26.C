/*Programa para repetir
cierta tabla de valores*/


#include<stdio.h>


int main(){

   int contador = 0;
   printf("A\tA+2\tA+4\tA+6\n\n");


   while(contador <= 5){


      printf("%d\t%d\t%d\t%d\n", contador*3 , contador*3 + 2, contador*3 + 4, contador*3 + 6);

      contador += 1;
   }





   return 0;



}
