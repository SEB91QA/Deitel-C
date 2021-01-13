
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



bool correcto( int num1, int num2 );


int main()
{
  

   srand( time( NULL ) );
  
   int respuesta;
   int contador = 1;
   char cont;   


   printf("\nNúmero de intentos para adivinar un número entre 1 y 1000\n");




   do{   
   
      int numero = 1 + rand() % 1000;   
      


      printf("Por favor escribe el número que tu crees: \n");
      scanf("%d", &respuesta);

      while( !correcto( respuesta, numero ) )
      {

         contador += 1;
         scanf("%d", &respuesta); 

      }


      if( contador < 10 )
      {

         printf("¡O sabe el secreto o tiene suerte!.\n");

      }
    
      else if( contador == 10 )
      {  
    
         printf("¡Ajá!. ¡Usted sabe el secreto!.\n");

      }

      if( contador > 10 ) 
      {

         printf("¡Usted puede hacerlo mejor!.\n");

      }

      printf("Escribe s para continuar o n para terminar");
      scanf(" %c", &cont);

   } while( cont == 's' ); 
   

   


   return 0;


}



bool correcto( int num1, int num2 )
{

   bool correct;

   if( num1 == num2 )
   {
     
      correct = true;

   }


   if( num1 < num2 )
   {

      printf("Muy abajo. Intenta de nuevo.\n");
      correct = false;

   }

   if( num1 > num2 )
   {

      printf("Muy arriba. Intenta de nuevo.\n");
      correct = false;

   }


   return correct;


}


