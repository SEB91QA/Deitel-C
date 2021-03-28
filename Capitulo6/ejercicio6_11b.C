

#include<stdio.h>
#define TAMANIO 10


void muestrarreglo( int b[] );


int main(){



   int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int pasadas;
   int i;
   int almacena;
   bool cambio = true;



   printf("\n");

   printf("Elementos de datos en orden desorganizado\n");  

   muestrarreglo( a );

   printf("\n");

   /*Ordenamiento*/


   printf("\n");

   for( pasadas = 1; pasadas < TAMANIO && cambio == true; pasadas++ ){
  
      printf("El arreglo después de la pasada %d es: ", pasadas - 1);
      muestrarreglo( a );

      cambio = false;

      for( i = 0; i < TAMANIO - pasadas; i++ ){

         if( a[ i ] > a [ i + 1 ] ){

            almacena = a[ i ];
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = almacena;
            cambio = true;

         }

         
      }


       printf("\n");
      

   }



   printf("\nElementos de datos en orden ascendente\n");

   muestrarreglo( a );

   return 0;


}


void muestrarreglo( int b[] ){


   int j;

   for( j = 0; j < TAMANIO; j++ ){


      printf("%4d", b[ j ]);


   }



}




