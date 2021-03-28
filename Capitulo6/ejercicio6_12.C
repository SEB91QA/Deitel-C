/*Instrucciones*/


#include<stdio.h>
#define TAMANIO1 10
#define TAMANIO2 15
#define TAMANIO3 12
#define TAMANIO4 5

int main(){



   int cuentas[ TAMANIO1 ] = { 0 };

   int bonos[ TAMANIO2 ] = { 0 };

   int temperaturas[ TAMANIO3 ];

   int mejores[ TAMANIO4 ] = { 1, 2, 3, 4, 5};



   for ( int i = 0; i < TAMANIO2; i++ ){

      bonos[ i ] += 1;

   }

   printf("\n");

   for( int j = 0; j < TAMANIO3; j++ ){


      printf("Valor de la temperatura para el mes %d: ", j + 1);
      scanf("%d", &temperaturas[ j ]);


   }

   printf("\n");


   for( int i = 0; i < TAMANIO4; i++ ){


      printf("%d\n", mejores[ i ]);


   }    

}


