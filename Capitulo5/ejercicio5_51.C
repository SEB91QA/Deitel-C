/*Juego de craps apostando*/



/*Juego de azar*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>  




enum Estatus {CONTINUA, GANA, PIERDE};


int tiradados(void); 

void mensajes(void);

float juego( float saldo);



int main(){

   float resultado;

   float saldoban = 1000.0;

   resultado = juego( saldoban );


   return 0;

}








int tiradados(void)
{


   int dado1;
   int dado2;
   int sumaTemp;


   dado1 = 1 + ( rand() % 6);
   dado2 = 1 + ( rand() % 6);
   sumaTemp = dado1 + dado2;

   printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);


   return sumaTemp;

} 


void mensajes(void){


   switch( rand() % 3 ){

      case 1:
         printf("mhm.., parece que va a la quiebra");
         break;

      case 2:
         printf("¡Ande, atrévase!");
         break;


      case 3:
         printf("“¡Ya estás grande, ahora es el momento de arriesgarse!”");
         break;


   }



}


float juego(float saldo){


   float apuesta;

   printf("Bienvenido al juego de craps apostando\n\n");

   printf("Tu saldo es de: %f", saldo);

   printf("Introduzca el valor de la apuesta: ");
   scanf("%f", &apuesta); 


   int suma;                     
   int mipunto;                  

   enum Estatus estatusJuego;   


   while( apuesta < saldo){


      printf("Por favor introduce de nuevo la apuesta\n");
      scanf("%f", &apuesta);


   }



   printf("Tu apuesta es de %f", apuesta);

   
   srand( time( NULL ) );

   suma = tiradados();

   switch( suma )
   {

      case 7:
      case 11:
         estatusJuego = GANA;   
         break;

      case 2:
      case 3:
      case 12:
         estatusJuego = PIERDE;   
         break;

      default:
         estatusJuego = CONTINUA;
         mipunto = suma;
         printf("Su punto es %d\n", suma);
         break;


   }


   while( estatusJuego == CONTINUA )
   {

      suma = tiradados();
      
      if( suma == mipunto ){

         estatusJuego = GANA;

      }


      else
      {       

         if( suma == 7 )
         { 
               
             estatusJuego = PIERDE;

         }

      }

   }



   if( estatusJuego == GANA )
   {

      printf("Felicitaciones has ganado esta partida\n");
      saldo = saldo + apuesta;
   
      printf("Tu nuevo saldo es de: %f", saldo);


   }


   else
   {

      printf("Que mal has perdido la partida\n");
      saldo = saldo - apuesta;

      printf("Tu nuevo saldo es de: %f", saldo);

   }


   return saldo;



}



































