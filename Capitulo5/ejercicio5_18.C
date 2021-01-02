/*Programa para identifica si el número es par o impar */

#include<stdio.h>
#include<math.h>


int impar( int numero );


int main()
{


   int numero;
   int n;


   printf("Por favor digite un número entero: \n");
   scanf("%d", &numero);


   while( numero != -1 )
   {

   n = impar( numero );

   if( n == 1 )
   {

      printf("El número es impar\n");

   }

   else
   {

      printf("El número es par\n");

   }


   printf("Por favor digite un número entero: \n");
   scanf("%d", &numero);


   }


   return 0;


}




int impar( int numero )
{


   int n;

   if( (numero % 2 ) == 0 )
   {

      n = 0;

   }

   else
   {

      n = 1;

   }
  

   return n;


}


