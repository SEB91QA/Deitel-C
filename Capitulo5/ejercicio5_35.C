/*Adivina un número*/




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



bool correcto( int num1, int num2 );



int main()
{
   

   srand( time( NULL ) );
  

   int respuesta;
   char cont;


   printf("Bienvenido a adivina un número\n\n");

   do{                                  /* '' encierra variables de tipo char */

      int numero = 1 + rand() % 10;


      printf("Tengo un número entre 1 y 10\n");
      printf("Puedes adivinar cúal es?\n");
      printf("Por favor escribe tu primera respuesta\n");

      scanf("%d", &respuesta);
      
      while( !correcto( numero, respuesta ) )
      {

         scanf("%d", &respuesta);

      } 
         

      printf("¡Excelente!. ¡Adivinaste el número!\n");
      printf("Quieres jugar otra vez (¿s o n?)\n");
      
      scanf(" %c", &cont);

      printf("\n");                   /*Dejar el espacio para scanf una variable de tipo char para ignorar el espacio*/ 


   } while( cont == 's' );

   printf("Gracias por juegar\n");


   return 0;



}



bool correcto( int num1, int num2 )
{

   bool correct;

   if( num2 == num1 )
   {
     
      correct = true;

   }


   if( num2 < num1 )
   {

      printf("Muy abajo. Intenta de nuevo.\n");
      correct = false;

   }

   if( num2 > num1 )
   {

      printf("Muy arriba. Intenta de nuevo.\n");
      correct = false;

   }


   return correct;


}















