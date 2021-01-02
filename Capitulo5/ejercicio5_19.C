/*Cuadrado*/


#include<stdio.h>
#include<math.h>


void cuadrado( int lado );



int main()
{

   int lado;

   printf("Por favor introduzca el lado del cuadrado: \n");
   scanf("%d", &lado);

   printf("\n");

   cuadrado( lado );


   return 0;


}



void cuadrado( int lado )
{


   for( unsigned i = 1; i <= lado; i++)
   {

      for( unsigned j = 1; j <= lado; j++ )
      {

         printf("*");


      }

      printf("\n");


   }


   printf("\n");

}
