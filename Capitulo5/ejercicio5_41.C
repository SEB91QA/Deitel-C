/*Visualizar la recursividad*/



#include<stdio.h>


long factorial( long numero );




int main(){



   int i;


   for( i = 0; i <= 10; i++ ){

      printf( "%2d! = %ld\n\n", i, factorial( i ) );


   }




   return 0;



}



long factorial( long numero ){


   long f;


   if( numero <= 1 ){


      return 1;


   }



   else{

      printf("numero = %ld\n", numero);
  
      f = (numero * factorial( numero - 1)); 
  
      printf("factorial recursivo = %ld\n", f);

      //printf("\n\n");

      return f;


   }
   


}
