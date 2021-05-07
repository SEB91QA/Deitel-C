#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANIO 21


/*Funciones de craps y de tiraDados*/

int tiraDados( void );


enum Estatus {CONTINUA, GANA, PIERDE};


int main(){

   srand( time(NULL) );
   
   int frecuencia[ TAMANIO ] = { 0 };
   int fre;

   for( int i = 1; i <= 1000; i++ ){

   int tiraDados( void );


   int numero = 1;
   int suma;
   int miPunto;


   enum Estatus estatusjuego;


   suma = tiraDados();


   switch( suma ){


      case 7:   
      case 11:
         estatusjuego = GANA;
         //numero = 1;   

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

       numero += 1;
       suma = tiraDados();

         if (suma == miPunto) {

            estatusjuego = GANA;

         }

         else{

            if( suma == 7 ){


               estatusjuego = PIERDE;
               numero = 0;

            }

         }


      }


       if( estatusjuego == GANA ){

          printf("El jugador gana\n");
          printf("Ganó luego de %d tiros\n", numero);


       }

       else{

          numero = 0;
          printf("El jugador pierde\n");

       }

     
                   


      if( fre >= 20){
   
         ++frecuencia[ 20 ];

      }

      else{

         ++frecuencia[ fre ];

      }

   }   


   printf("\n");

   for ( int j = 1; j < TAMANIO; j++ ){


     if( j == 20 ){

        printf("Se ganan %d juegos después del tiro 20", frecuencia[ 20 ]);


     }

     else{

        printf("Se ganan %d juegos en el tiro %d\n", frecuencia[ j ], j );   


     }

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

