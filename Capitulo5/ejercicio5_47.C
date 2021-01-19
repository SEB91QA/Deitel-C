

#include<stdio.h>


int misterio( int a, int b );


int main(){


   int x;
   int y;


   printf("Introduzca dos enteros: ");
   scanf("%d%d", &x, &y);

   printf("El resultado es %d\n", misterio( x, y ));

   return 0;


}



int misterio( int a, int b ){


   if( b == 1 || b == 0  ){

      return a;

   }


   else{

      return a + misterio( a, b -1 );

   }



}
