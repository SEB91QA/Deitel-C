/*Función que devulve los números invertidos entre 1 y 100000*/

#include<stdio.h>
#include<math.h>


int invertido( int numero );



int main()
{

   int numero;

   printf("Por favor digitar un valor entre 1 y 99999\n");
   scanf("%d", &numero);

   printf("El número invertido es: %d\n", invertido( numero ));


   return 0;

}



int invertido( int numero )
{

   int potencia = 10000;
   int orden = 1;
   int suma = 0;

   while( potencia >= 1 )
   {    
      
      if( numero < potencia )
      {
 
         potencia = potencia/10;

      }

      else
      {

         suma += (numero/potencia) * (orden);


         numero = numero%potencia;
         potencia = potencia/10;
         orden = orden*10;
 
      }

   }


   return suma;

}





