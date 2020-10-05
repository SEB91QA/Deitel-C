/*Ejercicio que obtiene el menor de un conjunto de enteros*/


#include<stdio.h>
#include<math.h>



int main()
{


   int t;
   int ma;
   int me;
   int m;
   int n;


   printf("Escriba el número a calcular el promedio:\n");
   scanf("%d", &t);

   printf("Por favor digite un entero: \n");
   scanf("%d", &m);

   ma = m;
   me = m;

   for( int i = 2; i <= t; i++ )
   {

      printf("Por favor digite un entero: \n");
      scanf("%d", &n);

      if ( n > ma)
      {

         ma = n;

      }

      if ( n < me )
      {
    
         me = n;

      }


   }


   printf("El menor de los enteros es: %d\n", me);
   printf("El mayor de los enteros es: %d\n", ma);
   


   return 0;


}



