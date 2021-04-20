
#include<stdio.h>
#define TAMANIO 10



int quees( const int b[], int p);



int main(){



   int x;


   int a[ TAMANIO ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


   x = quees( a, TAMANIO );

   printf("El resultado es %d\n", x);





   return 0;


}


int quees( const int b[], int p){


   if( p == 1 ){

      return b[ 0 ];

   }


   else{


      return b[ p - 1] + quees( b, p - 1 );

   }


}


