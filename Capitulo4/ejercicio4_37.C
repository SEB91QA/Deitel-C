/*Reemplazo de un break */


#include<stdio.h>
#include<math.h>



int main()
{

   
   bool c = false;

   for( int i = 1; i <= 10 && !c ; i++ )
   {


      if( i == 5 )
      {

         c = true;

      }

      printf("%d\t", i);     
      

   }


   return 0;


}


