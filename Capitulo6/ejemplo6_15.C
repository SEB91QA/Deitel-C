/* Búsqueda de un arreglo lineal */


#include<stdio.h>
#define TAMANIO 100


int busquedaLineal( const int arreglo[], int llave, int tamanio );



int main(){


   int a[ TAMANIO ];
   int x;
   int llaveBusqueda;
   int elemento;


   /*Crea los datos*/
   for( x = 0; x < TAMANIO; x++ ){

      a[ x ] = 2 * x;         

   }


   printf("Introduzca la llave de busqueda entera:\n");


   scanf("%d", &llaveBusqueda);

   elemento = busquedaLineal( a, llaveBusqueda, TAMANIO );

   if( elemento != -1 ){

      printf("Encuentre el valor en el elemento %d\n", elemento);

   }

   else{

      printf("Valor no encontrado\n");
 
   }


   return 0;


} 



int busquedaLineal( const int arreglo[], int llave, int tamanio ){


   int n;

   
   for( n = 0; n < tamanio; ++n ){

      if( arreglo[n] == llave ){

         return n;

      }

   }

   return -1;

}



