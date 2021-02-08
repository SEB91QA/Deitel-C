/* Arreglos estáticos locales y arreglos automáticos locales */



#include<stdio.h>

void iniciaArregloEstatico( void );
void iniciaArregloAutomatico( void );


int main(){


   printf("Primera llamada a cada función: \n");
   iniciaArregloEstatico();
   iniciaArregloAutomatico();

   printf("\n\nSegunda llamada a cada función: \n");
   iniciaArregloEstatico();
   iniciaArregloAutomatico();



   return 0;



}



void iniciaArregloEstatico( void ){



   static int arreglo[ 3 ];  
   int i;

   printf("\nValores al entrar a iniciaArregloEstatico:\n");


   for( i = 0; i <= 2; i++ ){


      printf(" arreglo1[ %d ] = %d", i, arreglo[ i ]);

   }


   printf("\nValores al salir de iniciaArregloEstatisco: \n");


   for( i = 0; i <= 2; i++ ){

      printf(" arreglo1[ %d ] = %d", i, arreglo[ i ] += 5);
 

   }


}



void iniciaArregloAutomatico( void ){




   int arreglo2[ 3 ] = { 1, 2, 3 };
   int i;


   printf("\n\nValores al entrar a iniciaArregloAutomatico:\n");


   for( i = 0; i <= 2; i++ ){


      printf(" arreglo2[ %d ] = %d", i, arreglo2[ i ]);


   }


   printf("\nValores al salir de iniciaArregloAutomatico:\n");


   for( i = 0; i <= 2; i++ ){

      printf(" arreglo2[ %d ] = %d", i, arreglo2[ i ] += 5 );

   }

}






