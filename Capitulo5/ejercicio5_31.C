/*Programa lanzamiento de un dado*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



int aparte( void );




int main()
{


   int caras = 0; 
   int cruz = 0;
   int resultado = 0;

   srand( time(NULL) ); 


   for( unsigned i = 1; i <= 100; i++ )
   {

      resultado = aparte();

      if( resultado == 0 )
      {
         printf("El resultado es cara\n");
         caras++;

      }

      if( resultado == 1 ) 
      {

         printf("El resultado es cruz\n");
         cruz++; 

      }


   }



   printf("\nEl número de caras es: %d\n", caras);
   printf("El número de cruces es: %d\n", cruz);



   return 0;



}



int aparte( void )
{

   int tirada;

   tirada = 0 + ( rand() % 2 ); 

   if( tirada == 0 )
   {

      return 0;

   }

   else
   {

      return 1;

   }



}


