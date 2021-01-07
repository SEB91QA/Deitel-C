/*Programa que obtiene un número perfecto*/

#include<stdio.h>
#include<math.h>



bool perfecto( int numero );



int main()
{


   

   printf("Lista de los números perfectos del 1 al 1000\n\n");

   printf("Números Perfectos\t Factores del número\n");
   
   for( unsigned i = 1; i <= 1000; i++ )
   {

      if( perfecto(i) == true ) 
      {


         printf("%10d", i);

         printf("\t\t\t");

         for( unsigned j = 1; j < i; j++ )
         {
            if( (i%j) == 0 )         
            {
               printf("%d,", j);

            }

         }

         printf("\n");

      }

      


   }


   return 0;



}



bool perfecto( int numero )
{

   int suma = 0;
   bool resultado;

   for( unsigned i = 1; i < numero; i++ )
   {


      if( (numero%i) == 0 )
      {

         suma += i;

      }


   }

   if( suma == numero )
   {

      resultado = true;

   }

   else
   {

      resultado = false;

   }


   return resultado;


}

