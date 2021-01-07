/*Programa para determinar si un número es primo*/

#include<stdio.h>
#include<math.h>


bool primo( int numero );



int main()
{

   int contador = 0;

/**
   int numero;

   printf("Por favor digite un número entero mayor o igual a 1: \n");
   scanf("%d", &numero);


   if( primo(numero) == true )
   {

      printf("El número es primo\n");

   }

   else
   {

      printf("El número no es primo\n");

   }
*/


   printf("Lista de los primos entre 1 y 10000\n");
  
   for( unsigned i = 2; i <= 10000; i++ )
   {

      if( primo(i) == true )
      {

         printf("%d ", i );
         contador += 1;

         if( (contador%10) == 0 )
         {

            printf("\n");

         }

      }

   }

   return 0;


}



bool primo( int numero )
{

   bool prim;

   if( numero == 1 || numero == 2)
   {
 
      prim = true;
      //return true;

   }

   else
   {

      for( unsigned i = 2; i < numero/2; i++ )
      {

         if( (numero%i ) == 0 )
         {
   
            prim = false;
            break;
            //return false;

         }

         else
         {
            prim = true;
            //return true;

         }

  
      }


   }

   return prim;
  
}


































