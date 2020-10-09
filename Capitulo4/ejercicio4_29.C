/*Ejercicio Leyes de Morgan*/


#include<stdio.h>
#include<math.h>



int main()
{


   int x = 10;
   int y = 1;

   int a = 3;
   int b = 3;

   int i = 2;
   int j = 9;
   int g = 5;


   printf("%d\n", !( x < 5) && !( y >= 7));
   printf("%d\n", !( a == b) || !( g != 5));
   printf("%d\n", !( ( x <= 8 ) && !( y > 4) ));
   printf("%d\n", !( ( i > 4 ) || ( j <= 6 )));

   printf("\nLas expresiones equivalentes son:\n");

   printf("%d\n", !(( x < 5) || ( y >= 7)));
   printf("%d\n", !( (a == b) && ( g != 5) ));
   printf("%d\n", !( x <= 8 ) || ( y > 4) );
   printf("%d\n", !( i > 4 ) && !( j <= 6 ));











   return 0;



}


