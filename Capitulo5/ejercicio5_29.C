/*Máximo común divisor*/

#include<stdio.h>
#include<math.h>


int mcd( int num1, int num2 );



int main()
{

   int numero1;
   int numero2;

   printf("Por favor digite el primer número: \n");
   scanf("%d", &numero1);

   printf("Por favor digite el segundo número: \n");
   scanf("%d", &numero2);


   printf("El mcd es: %d\n", mcd( numero1, numero2 ) );




   return 0;

}



int mcd( int num1, int num2 )
{

   int maximo;

   for( int i = num1; i >= 1; i-- )
   {

      if ( (num1%i) == 0 && (num2%i) == 0 )
      {

         maximo = i;
         break;

      }

      else
      {

         continue;  

      }

   }

   return maximo;
   

}
