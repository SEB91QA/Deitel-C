/*Etiqueta de índices*/

#include<stdio.h>
#define FILA 3
#define COLUMNA 5

int main(){



   int ventas[ FILA ][ COLUMNA ] = { 0 };

   for( int fila = 0; fila < FILA; fila++ ){

      for( int columna = 0; columna < COLUMNA; columna++ ){

         printf("ventas[ %d ][ %d ] = %d\t", fila, columna, ventas[ fila ][ columna ]);

         if( columna == 4 ){

            printf("\n");

         }


      }


   }



   return 0;


}




