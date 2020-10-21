/*Reemplazo de un continue*/



#include<stdio.h>
#include<math.h>



int main()
{


   for( int i = 1; i <= 10; i++)
   {

      if( i == 5 )
      {

          ++i;

      }


      printf("%d\t", i);

   }



   return 0;


}



