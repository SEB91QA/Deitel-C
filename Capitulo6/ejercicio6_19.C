/*Tiro de dos dados*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANIO 13


int sumadados( void );


int main(){


   int frecuencia[ TAMANIO ] = { 0 };

   srand( time(NULL) );


   for( int i = 1; i <= 36000; i++ ){


      int sumaT = sumadados();

      ++frecuencia[ sumaT ];


   }
   

   printf("%s%13s\n", "Resultado", "Frecuencia");

   for( int indice = 1; indice < TAMANIO; indice++ ){

      printf("   %d%13d\n", indice, frecuencia[ indice ]);



   }


   return 0;

}



int sumadados( void ){

   int dado1;
   int dado2;
   int suma;

   dado1 = 1 + ( rand() % 6 );
   dado2 = 1 + ( rand() % 6 );

   suma = dado1 + dado2;

   printf("La suma fue de: %d\n", suma);

   return suma;


}

