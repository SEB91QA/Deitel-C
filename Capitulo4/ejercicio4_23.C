/*Interés compuesto en cálculo de centavos*/

#include<stdio.h>
#include<math.h>


int main()
{

   int monto;
   int principal = 1000.; 
   int centavos;
   double tasa = .05;
   int anio;

   printf("%4s%21s\n", "Anio", "Monto del deposito");


   for( anio = 1; anio <= 10; anio++)
   {

      monto = principal * pow( 1.0 + tasa, anio);
      centavos = monto % 100;

      if( centavos >= 10 )
      {      

         printf("%4d%21d", anio, monto);
         printf(".%d\n", centavos);
      }

      else
      {
  
         printf("%4d%21d", anio, monto);
         printf(".0");
         printf("%d\n", centavos);

      }

   }


   return 0;


}


