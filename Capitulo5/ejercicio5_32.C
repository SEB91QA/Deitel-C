/*Preguntas de multiplicación*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int multiplicacion( int numero1, int numero2 );


int main()
{


   int numero1;
   int numero2;

   printf("Programa que ayuda a aprender a multiplicar\n\n");

   srand( time( NULL ) );

   printf("Calcular el producto de los siguientes números: \n\n");

 
   for( unsigned i = 1; i <= 5; i++ )
   {

      numero1 = 1 + rand() % 100;
      numero2 = 1 + rand() % 100;

      printf("%d)\n", i);
      printf("El primer número es: %d\n", numero1);
      printf("El segundo número es: %d\n", numero2);

      multiplicacion( numero1, numero2 );

      printf("\n");               
   }


   printf("Gracias por participar\n");


   return 0;


}



int multiplicacion( int numero1, int numero2 )
{

   int producto = numero1 * numero2;

   int resultado;

   printf("Por favor digite el producto: \n");
   scanf("%d", &resultado);
   
   while( resultado != producto )
   {
      printf("No. Por favor inténtalo de nuevo\n");

      printf("Por favor digita de nuevo el producto: \n");
      scanf("%d", &resultado);

   }

   printf("¡Muy bien!\n");


   return resultado;

}



