/*Ejercicio de estudio de aritmética*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void correcto();
void incorrecto();

int tipo( int tip, int nivel );
int suma( int n1, int n2 );
int resta( int n1, int n2 );
int multiplicacion( int n1, int n2 );
int division( int n1, int n2 );



int main(){


   int tip;
   int nivel;
   int n = 0;

   printf("Bienvenido al programa de estudio de aritmética\n\n");
   
   printf("Por favor escoje:\n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n5.Todas\n");
   scanf("%d", &tip);

   printf("Por favor selecciona el nivel de las operaciones\n");
   scanf("%d", &nivel);

   srand( time( NULL ) );

   for( unsigned i = 1; i <= 10; i++ ){


      n += tipo( tip, nivel );
      printf("\n");    

   }


   float prop = n/10.; 

   if( prop < 0.75 ){

      printf("Pide ayuda a tu profesor\n");

   }

   else{

      printf("Que buen trabajo sigue así\n");

   }

   return 0;


}



void correcto()
{


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


void incorrecto()
{

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


int tipo(int tip, int nivel)
{

   int l = pow( 10, nivel );

   int n1 = 1 + rand() % ( l - 1);
   int n2 = 1 + rand() % ( l - 1);

   int n;

   switch( tip ){
      
      case 1:
         n = suma( n1, n2 );
         break;
         
      case 2:
         n = resta( n1, n2 );
         break;
         
      case 3:
         n = multiplicacion( n1, n2 );
         break;
         
      case 4:
         n = division( n1, n2 );
         break;
         
      case 5:
         int v = 1 + rand() % 4;
         tipo(v, nivel);
         

   }


   return n;



}


int multiplicacion( int n1, int n2 )
{

   int producto = n1 * n2;

   printf("Los números son: %d y %d\n", n1, n2);
   int resultado;

   printf("Por favor digite el producto: \n");
   scanf("%d", &resultado);

   if( resultado == producto ){

      correcto();
      return 1;

   }

   else{

      incorrecto();
      return 0;

   }



}


int suma( int n1, int n2 ){

   int sum = n1 + n2;
  
   printf("Los números son: %d y %d\n", n1, n2);
   int resultado;

   printf("Por favor digite la suma: \n");
   scanf("%d", &resultado);

   if( resultado == sum ){

      correcto();
      return 1;

   }

   else{

      incorrecto();
      return 0;

   }



}


int resta( int n1, int n2 ){

   int res = fabs( n1 - n2 );

   printf("Los números son: %d y %d\n", n1, n2);
   int resultado;

   printf("Por favor digite la resta positiva: \n");
   scanf("%d", &resultado);

   if( resultado == res ){

      correcto();
      return 1;

   }

   else{

      incorrecto();
      return 0;

   }



}


int division( int n1, int n2 ){

   int div;

   if( n1 < n2 ){

      div = n2/n1;

   }

   else{

      div = n1/n2;

   }

   printf("Los números son: %d y %d\n", n1, n2);
   int resultado;

   printf("Por favor digite el cociente entre el número mayor y el número menor: \n");
   scanf("%d", &resultado);

   if( resultado == div ){

      correcto();
      return 1;

   }

   else{

      incorrecto();
      return 0;

   }



}


