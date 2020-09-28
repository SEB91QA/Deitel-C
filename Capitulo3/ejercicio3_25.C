/*Programa para imprimier tabla
de valores correspondiente cien y mil veces */

#include<stdio.h>



int main(){


   printf("N\t10*N\t100*N\t1000*N\n\n");
 
   int contador = 1;

   while(contador <= 10){

      printf("%d\t%d\t%d\t%d\n", contador, 10*contador, 100*contador, 1000*contador);

      contador += 1;
   }


   return 0;


}
