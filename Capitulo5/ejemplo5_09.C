/*Factorial usando functiones recursivas*/


#include<stdio.h>


long factorial( long numero );      /*Prototipo de función*/


int main()
{

   int i;                           /*Contador*/

   for( i = 1; i <= 10; i++ )
   {

      printf("%2d! = %ld\n", i, factorial( i ) );
      

   }


   return 0;


}


long factorial( long numero )
{


   if( numero <= 1 )
   {

      return 1;

   }


   else
   {

      return ( numero * factorial( numero - 1 ) );

   }


}


