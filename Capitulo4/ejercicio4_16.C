/*Ejercicio de patrones*/



#include<stdio.h>
#include<math.h>



int main()
{


   for( int i = 1; i <= 10; i++)
   {

      for( int a = 1; a <= i; a++)
      {

         printf("*");

      }

      printf("\n");

   }


   printf("\n");


   for( int j = 10; j >= 1; j--)
   {

      for ( int b = 1; b <= j; b++)
      {   

         printf("*");

      }

      printf("\n");

   }


   printf("\n");





   for( int k = 1; k <= 10; k++)
   {

      printf("*");

   }

   printf("\n");


   for( int c = 1; c <= 9; c++)
   {

      for( int n = 1; n <= c; n++)
      {        

         printf(" ");

      }

      for( int m = 1; m <= (10-c); m++)
      {

         printf("*");

      }


      printf("\n");

   }

   
   printf("\n");


   for( int s = 9; s >= 1; s--)
   {

      for( int z = 1; z <= s; z++)
      { 

         printf(" ");

      }

      for( int g = 1; g <= (10 - s); g++)
      {

         printf("*");

      }

      printf("\n");

   }


   for( int l = 1; l <= 10; l++)
   {


      printf("*");

   }

   return 0;


}



