
/*Imprime los números romanos*/


#include<stdio.h>
#include<math.h>



int main()
{

   for( int i = 1; i <= 10; i++)
   {


      if( i <= 3)
      {

         for( int j = 1; j <= i; j++)
         {

            printf("I");

         }

         printf("\n");

      }


      if( i == 4 )
      {

         printf("IV");
         printf("\n");
         continue;

      }




      if( i == 5 ) 
      {

         printf("V");
         printf("\n");
         continue;
  
      }


      if( i >= 6 && i <= 8 )
      {
         printf("V");
         
         for( int j = 1; j <= (i-5); j++ )
         {

            printf("I");

         } 
   
         printf("\n"); 

      }

      if( i == 9 )
      {

         printf("IX");
         printf("\n");
         continue;
      }

      if( i == 10 )
      {

         printf("X");
         printf("\n");

      }
  
   }

   return 0;

}
