
#include<stdio.h>
#define TAMANIO 10




int main(){

   int i;

   double arr[ TAMANIO ] = {0};
   
   double cuar = arr[3];   
   double qui = arr[4];

   arr[9] = 1.667;
   arr[6] = 3.333;

   printf( "%.2f\n", arr[9] );
   printf( "%.2f\n", arr[6] );


   for( i = 0; i < TAMANIO; i++ ){

      printf("%f\n", arr[ i ]);


   }

   return 0;

}
