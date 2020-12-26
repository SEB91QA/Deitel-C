#include<stdio.h>


int cubo( int y );                //Variable de alcance de archivo: Bloque
                                  //Variable de alcance de bloque

int main()                        //Variable de alcance de archivo
{


   int x;                         //Variable de alcance de bloque

   for( x = 1; x <= 10; x++ )
   {

      printf("%d\n", cubo(x) );

   }


   return 0;

}


int cubo( int y )                 
{


   return y * y * y;

}

