/*Función recursiva de Fibonacci*/


#include<stdio.h>



long fibonacci( long n );



int main()
{


   long resultado;
   long numero;


   printf("Introduzca un número: "); 
   scanf("%ld", &numero);

   resultado = fibonacci( numero );


   printf("Fibonacci( %ld ) = %ld\n", numero, resultado);


   return 0;

}


/*Definición de la función recursiva*/


long fibonacci( long n )
{

   if( n == 1 || n == 0 )
   {

      return n;

   }


   else{

      return fibonacci( n - 1 ) + fibonacci( n - 2 );

   }


}

