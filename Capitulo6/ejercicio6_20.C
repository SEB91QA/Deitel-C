#include<stdio.h>
#include<stdlib.h>
#include<time.h>


bool craps( void );



enum Estatus {CONTINUA, GANA, PIERDE};



bool craps( void ){

enum Estatus {CONTINUA, GANA, PIERDE};

int tiraDados( void );

int main(){


   int suma;
   int miPunto;


   enum Estatus estatusjuego;


   srand( time(NULL) );

   suma = tiraDados();


   switch( suma ){


      case 7:   
      case 11:
         estatusjuego = GANA;   

      case 2:
      case 3:
      case 12:
         estatusjuego = PIERDE;
         break;

      default:
         estatusjuego = CONTINUA;
         miPunto = suma;
         printf("Mi punto es %d\n", miPunto);
         break;
      
   }


      while (estatusjuego == CONTINUA ){


         suma = tiraDados();

         if (suma == miPunto) {

            estatusjuego = GANA;

         }

         else{

            if( suma == 7 ){


               estatusjuego = PIERDE;

            }

         }


      }


      if( estatusjuego == GANA ){

         printf("El jugador gana\n");


      }

      else{

         printf("El jugador pierde\n");

      }



   return 0;


}



int tiraDados( void ){



   int dado1;
   int dado2;
   int sumaTemp;


   dado1 = 1 + (rand() % 6);
   dado2 = 1 + (rand() % 6);

   sumaTemp = dado1 + dado2;


   printf("El jugador tiró %d + %d = %d\n", dado1, dado2, sumaTemp);

   return sumaTemp;

}













}



