
#include<stdio.h>
#define TAMANIO 3


int main(){


   int tabla[ TAMANIO ][ TAMANIO ] = { { 1, 8}, { 2, 4, 6}, { 5 } };  

   printf("%d\n", TAMANIO * TAMANIO );


   for( int x = 0; x < TAMANIO; x++ ){

      for( int y = 0; y < TAMANIO; y++ ){

         
         printf("tabla[ %d ][ %d ] = %d\n", x, y, tabla[ x ][ y ]);


      }


   }



   return 0;


}



