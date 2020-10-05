/*Cálculo de diferentes intersescompuestos*/


#include<stdio.h>
#include<math.h>



int main()
{

   double monto;
   double principal = 1000.00;
   double tasa;
   int anio;

   printf( "%4s%21s\n" , "Anio", "Monto del depósito" );

   
   for (int i = 5; i <= 10; i++ )
   {

      if( i == 7){

         continue;

      }

      tasa = (float) i / 100;
      printf("\nMonto con una tasa del %d porciento a 10 años es:\n\n", i);

      for( anio = 1; anio <= 10; anio++)
      {
   
         monto = principal * pow(1 + tasa, anio);

         printf("%4s%21f\n", "Anio", monto);

      }

   }

   return 0;


}






