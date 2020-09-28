/*Velocidad de una computadora*/




#include<stdio.h>



int main(){


   int contador = 1;


   while(contador <= 300000000){ 
 
      //printf("%d\n", contador);

      contador = contador + 1;

      if( (contador%1000000) == 0){


         printf("%d\n", contador);


      }

   }


   return 0;


}

/*Le toma aproximadamente 1,48 segs
en contar hasta 30000000*/


