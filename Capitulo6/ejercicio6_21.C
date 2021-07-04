/*Sistema reservaciones para una aerolínea*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANIO 11


int asientoazar( int a );

int main(){


   srand( time( NULL ) );

   int asientos[ TAMANIO ] = { 0 };
   int clase;
   int silla;


   for( int i = 1; i <= 12; i++ ){


      printf("Por favor, digite 1 para:  Primera Clase\n");
      printf("Por favor, digite 2 para:  Clase Económica\n");

      scanf("%d", &clase);

   
      while ( clase != 1 && clase != 2 ){

         printf("Dígito incorrecto. Por favor digite 1 para Primera Clase o 2 para Clase Económica.\n\n");
      
         scanf("%d", &clase);

      }


      if( clase == 1){

         silla = asientoazar( clase );
         ++asientos[ silla ];

         printf("Pase de abordar\n\n");
         printf("*************************************\n");
         printf("Silla %d\n", silla);
         printf("\t\tClase: Primera Clase\n");
         printf("*************************************\n");

     }

      else{

         silla = asientoazar( clase );
         ++asientos[ silla ];

         printf("Pase de abordar\n\n");
         printf("*******************************\n");
         printf("Silla %d\n", silla);
         printf("\t\tClase: Económica\n");
         printf("*******************************\n");
         printf("\n");


      }
   



   }   

   return 0;

}



int asientoazar( int a ){


   int numero;

   if (a == 1 ){

       numero = 1 + ( rand() % 5 );
  
   }

   if ( a == 2 ){

       numero = 5 + (  rand() % 6 ); 

   }

   return numero;

}


