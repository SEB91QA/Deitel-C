/*Adivina un número*/




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>





int main()
{

   

   srand( time( NULL ) );
  

   int respuesta;
   int cont;

   //char s;   
   //char cont;



   printf("Bienvenido a adivina un número\n");
   printf("Presiona 1 para continuar o 0 para salir\n\n\n");
   scanf("%d", &cont);


   while( cont == 1 )
   {

      int numero = 1 + rand() % 10;


      printf("Tengo un número entre 1 y 10\n");
      printf("Puedes adivinar cúal es?\n");
      printf("Por favor escribe tu primera respuesta\n");

      scanf("%d", &respuesta);
       
      while( respuesta != numero )
      {

 
         if( respuesta < numero )
         {

            printf("Muy abajo. Intenta de nuevo.\n");
            scanf("%d", &respuesta);

         }

         if( respuesta > numero )
         {

            printf("Muy arriba. Intenta de nuevo.\n");
            scanf("%d", &respuesta);  

         }


      }


      printf("¡Excelente!. ¡Adivinaste el número!\n");
      printf("Quieres jugar otra vez (¿s o n?)(1 ó 0)\n");
      scanf("%d", &cont);

   }

   return 0;



}






