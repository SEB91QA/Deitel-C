/*Educación asistida por Computadora*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void multiplicacion( int num1, int num2 );
void correcto();
void incorrecto();



int main()
{

   int continuador;
   
   printf("Programa para aprender a Multiplicar\n\n");


   srand( time( NULL ) );

   printf("Presiona cualquier número para continuar y 0 para terminar\n");
   scanf("%d", &continuador);
   
    
   while( continuador != 0 )
   {

      int numero1 = 1 + rand() % 100;
      int numero2 = 1 + rand() % 100;
   
      printf("Los números son %d y %d\n", numero1, numero2);


      multiplicacion( numero1, numero2 );


      printf("Presiona cualquier número para continuar y 0 para terminar\n");
      scanf("%d", &continuador);

   }

   printf("\nGracias por jugar\n");
   

   return 0;


}



void multiplicacion( int num1, int num2 )
{

   int producto = num1 * num2;
   int resultado;


   printf("Por favor digita el resultado que crees que es correcto: \n");
   scanf("%d", &resultado);

   while( resultado != producto )
   {
   
      incorrecto();
      scanf("%d", &resultado);


   }


   correcto();
   printf("\n");
  
}


void correcto()
{


   switch( rand() % 4 )
   {
      case 0:
         printf("¡Muy bien!\n");
         break;

      case 1:
         printf("¡Excelente Trabajo!\n");
         break;

      case 2:
         printf("¡Buen trabajo!\n");
         break;

      case 3:
         printf("¡Mantén ese buen rendimiento!\n");
         break;

   }

}


void incorrecto()
{

   switch( rand() % 4 )
   {
      case 0:
         printf("No. Por favor inténtalo de nuevo\n");
         break;

      case 1:
         printf("Incorrecto. Trata una vez más.\n");
         break;

      case 2:
         printf("¡No te rindas!\n");
         break;

      case 3:
         printf("No. Sigue intentado\n");
         break;


   }


}
