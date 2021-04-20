
#include<stdio.h>
#define TAMANIO 10


void algunaFuncion( const int b[], int comienzaIndice, int tamanio );



int main(){


   int a[ TAMANIO ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };


   printf("La respuesta es:\n");
   algunaFuncion( a, 0, TAMANIO );
   printf("\n");


   return 0;


}


void algunaFuncion( const int b[], int iniciaIndice, int tamanio ){



   if( iniciaIndice < tamanio ){

      algunaFuncion( b, iniciaIndice + 1, tamanio );
      printf("%d  ", b[ iniciaIndice ]);


   }



}


