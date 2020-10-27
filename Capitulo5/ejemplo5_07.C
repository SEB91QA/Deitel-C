/*Juego de azar*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>   /*Prototipo de la función time*/



/*Constantes de enumeración que representan el estado del juego*/
enum Estatus {CONTINUA, GANA, PIERDE};


int tiradados(void);  /*Prototipo de la función*/


/*Comienzo de la ejecución del programa*/
int main()
{

   int suma;                     /*Suma de los dados*/
   int mipunto;                  /*Punto ganado*/

   enum Estatus estatusJuego;    /*Contiene: CONTINUE, GANA, PIERDE*/

   /*Se randomiza el generador de los números aleatorios con la función time*/

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
      
      if( suma == mipunto )
      {

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

      printf("El jugador gana\n");

   }


   else
   {

      printf("El jugador pierde\n");

   }


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






