/*Función no recursiva de Fubonacci*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int fibonacci1( int n );
double fibonacci2( int n );


int main(){



   int numero;

   printf("Por favor escriba el n-ésimo término de la sucesión de Fibonacci\n");
   scanf("%d", &numero);

   int serie1 = fibonacci1( numero );
   double serie2 = fibonacci2( numero );


   printf( "Fibonacci(%d) para un tipo int es %d\n", numero, serie1 );
   printf( "Fibonacci(%d) para un tipo double es %f\n", numero, serie2 );


   return 0;



}


int fibonacci1( int n ){

   int f0 = 0;
   int f1 = 1;
   int sum = 0;

 
   for( unsigned i = 1; i <= ( n - 1 ); i++ ){

      sum = f0 + f1;
      
      f0 = f1;
      f1 = sum;        


   }


   return sum;
  

}


double fibonacci2( int n ){

   int f0 = 0;
   int f1 = 1;

   double sum = 0;

   for( unsigned i = 1; i <= ( n - 1); i++ ){

      sum = f0 + f1;

      f0 = f1;
      f1 = sum;

   }


   return sum;



}


