/*Caracrter de cuadrado*/


#include<stdio.h>


void cuadrado( int lado, char c);



int main()
{


   char c;
   int lado;

   printf("Por favor intrduzca el carcater: \n");
   scanf("%c", &c);

   printf("Por favor introduzca el lado del triángulo: \n");
   scanf("%d", &lado);


   cuadrado( lado, c );



   return 0;


}




void cuadrado( int lado, char c)
{


   for( unsigned i = 1; i <= lado; i++ )
   {

      for( unsigned j = 1; j <= lado; j++ )
      {

         printf("%c", c);


      }

   printf("\n");

   }


}



