#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


/*Valor de x después de ciertas operaciones*/


int main()
{


   float x = fabs( 7.5 );
   printf("%f\n", x);

   float y = floor( 7.5 );
   printf("%f\n", y);

   float z = fabs( 0.0 );
   printf("%f\n", z);

   float w = ceil( 0.0 );
   printf("%f\n", w);

   float l = fabs( -6.4 );
   printf("%f\n", l);

   float i = ceil( -6.4 );
   printf("%f\n", i);

   float t = ceil( -fabs(-8 + floor(-5.5)));
   printf("%f\n", t);
   


   return 0;

}

