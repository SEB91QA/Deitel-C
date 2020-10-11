/*Escribir un rombo*/



#include<stdio.h>
#include<math.h>


int main()
{


   for( int i = 0; i <= 4; i++)
   {

      for( int j = 1; j <= (4 - i); j++ )
      {

         printf(" ");

      }
      
      for( int j = 1; j <= (2*i + 1 ); j++)
      {     

         printf("*");

      }

      
      for( int j = 1; j <= (4 - i); j++ )
      {

         printf(" ");

      }

      printf(" \n");

   }



   



   return 0;


}



