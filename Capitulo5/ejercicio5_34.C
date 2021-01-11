#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


bool multiplicacion( int num1, int num2 );
void correcto();
void incorrecto();



int main()
{

   int continuador;
   int correct = 0;
   int incorrect = 0;

   float porcorrect;
   float porincorrect;

   //bool multipli;
   
   printf("Programa para aprender a Multiplicar\n\n");
   printf("Por favor escribir el producto de los números dados\n");

   srand( time( NULL ) );

   for( unsigned i = 1; i <= 10; i++ )
   {   

      int numero1 = 1 + rand() % 100;
      int numero2 = 1 + rand() % 100;
   
      printf("\nLos números son %d y %d\n", numero1, numero2);


      //multipli =  multiplicacion( numero1, numero2 );


      if( multiplicacion(numero1, numero2) == true )
      {

         correct++;
         continue;

      }

      else
      {

         incorrect++;
         continue;
      }


   }

   porcorrect = ((correct)/10.)*100;
   porincorrect = ((incorrect)/10.)*100;


   if( porcorrect < 75.0 )
   {

      printf("\nPor favor pide ayuda adicional a tu profesor\n");

   }

   else
   {

      printf("\nMuy bien trabajo!\n");

   }


 
   return 0;


}



bool multiplicacion( int num1, int num2 )
{

   int producto = num1 * num2;
   int resultado;


   printf("Por favor digita el resultado que crees que es correcto: \n");
   scanf("%d", &resultado);

   if( resultado == producto )
   {
   
      correcto();
      return true;  
    
   }


   else
   {

      incorrecto();
      return false;

   }
  
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



