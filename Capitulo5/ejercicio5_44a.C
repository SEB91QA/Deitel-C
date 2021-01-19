/*Registra el nivel de capacidad con la multiplicación*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



bool multiplicacion( int n1, int n2 );


void correcto();
void incorrecto();



int main(){


   int n;

   int numero1;
   int numero2;

   int corr = 0;
   int incorr = 0;

   printf("Por favor digite el nivel de dificultad: \n");
   scanf("%d", &n);

   srand( time( NULL ) );

   printf("\nNivel %d. Suma, resta, multiplicación, división con %d cifras\n\n", n, n);
   


   for( unsigned i = 1; i <= 10; i++ ){ 

      int l = pow( 10, n );

      numero1 = 1 + rand() % ( l - 1 ); 
      numero2 = 1 + rand() % ( l - 1 );

      printf("Los números son %d y %d\n", numero1, numero2);
   

      if( multiplicacion( numero1, numero2 ) ){
   
         correcto();
         corr++;
         

      }     
      
      else{


         incorrecto();

      }     

      printf("\n");


   }


   float porcorr = corr/10.;

   if( porcorr < 0.75 ){

      printf("\nPor favor pide ayuda adicional a tu profesor\n");

   }


   else{

      printf("\nMuy buen trabajo!\n");

   }

   return 0;



}



bool multiplicacion( int n1, int n2 ){

   int producto = n1 * n2;
   int resultado;   

   printf("Por favor escribe el resultado: \n");
   scanf("%d", &resultado);

   if( resultado == producto ){

      return true;

   }
  
   else{

      return false;

   }

}




void correcto(){


   switch( rand() % 4 )
   {
      case 0:
         printf("¡Muy bien!\n");
         break;

      case 1:
         printf("¡Excelente Trabajo!\n");
         break;

      case 2:
         printf("¡Buen trabajo!\n");
         break;

      case 3:
         printf("¡Mantén ese buen rendimiento!\n");
         break;

   }

}


void incorrecto(){

   switch( rand() % 4 )
   {
      case 0:
         printf("No. Por favor inténtalo de nuevo\n");
         break;

      case 1:
         printf("Incorrecto. Trata una vez más.\n");
         break;

      case 2:
         printf("¡No te rindas!\n");
         break;

      case 3:
         printf("No. Sigue intentado\n");
         break;


   }


}

