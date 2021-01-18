/*MCD como función recursiva*/


#include<stdio.h>


int mcd( int x, int y );




int main(){


   int x;
   int y;


   printf("Por favor digita dos números para obtener su MCD\n");
   scanf("%d", &x);
   scanf("%d", &y);


   printf("El MCD entre los números %d y %d es: %d\n", x, y, mcd( x, y ));



   return 0;



}





int mcd( int x, int y ){



   if( y == 0 ){


      return x;


   }



   else{



      return mcd( y, x%y );


   }



}


