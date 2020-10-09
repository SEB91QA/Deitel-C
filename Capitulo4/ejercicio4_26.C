/*Cálculo del valor de pi*/


#include<stdio.h>
#include<math.h>



int main()
{

   float pi = 0;
   float p;


   //printf("%4s%21s\n", "Aproximación", "Valor de pi");

   for( int j = 0; j <= 20000; j++ )
   {

      p = ( 4 * pow( -1, 2 + j) ) / (  2 * j + 1);  
      pi += p;

   }   


   printf("El valor de pi aproximado es: %f\n", pi);



   return 0;

}

/*Podemos hacer una aproximación para cada valor de j*/
