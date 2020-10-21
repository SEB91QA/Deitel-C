/*Qué hace el siguiente programa*/



#include<stdio.h>
#include<math.h>


int main()
{

   int i;
   int j;
   int k;

   for( i = 1; i <= 5; i++)
   {

      for( j = 1; j <= 3; j++ )
      { 

         for( k = 1; k <= 5; k++ )
         {

            printf("*");
         

         }

         printf("\n");
      }

      printf("\n");

   }

   return 0;


}




