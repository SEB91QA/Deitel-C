
/*Tamaño de un rombo*/


#include<stdio.h>
#include<math.h>

int main()
{

   int n;

   /*Tamaño del rombo*/
   printf("Por favor introducir un número impar para el tamaño del rombo: \n");
   scanf("%d", &n);


   while( n%2 == 0 )
   {

      printf("Número incorrecto. Por favor introducir un número impar para el tamaño del rombo: \n");
      scanf("%d", &n);

   }

   //printf("%d\n", n/2);

   for( int i = 0; i <= (n/2) ; i++)
   {

      for( int j = 1; j <= n/2 - i; j++ )
      {

         printf(" ");

      }

      for( int j = 1; j <= (2*i + 1 ); j++)
      {

         printf("*");

      }


      for( int j = 1; j <= n/2 - i; j++ )
      {

         printf(" ");

      }

      printf(" \n");

   }


   for( int i = 0; i <= (n/2)-1; i++)
   {

      for( int j = 0; j <= i; j++)
      {

         printf(" ");

      }


      for( int j = 1; j <= ((n-2) - 2*i); j++)
      {

         printf("*");

      }


      for( int j = 0; j <= i; j++)
      {

         printf(" ");

      }


      printf("\n");

   }



   return 0;


}









