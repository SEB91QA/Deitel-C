/*Cálculo de los factoriales del uno al cinco*/



#include<stdio.h>
#include<math.h>



int main()
{

   int factorial = 1; 

   for( int i = 1; i <= 5; i++)
   {

   factorial *= i;   

   printf("El factorial de %d es %d\n", i, factorial);


   }



   return 0;

}
