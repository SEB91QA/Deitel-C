/*Calculo de pagos
a un vededor por comisión*/


#include<stdio.h>

int main(){


   float ventas;
   float salario = 200;
   float total;

   /*Introducimos las ventas*/
   printf("Por favor introduzca las ventas (-1 para terminar): ");
   scanf("%f", &ventas);

   while( ventas != -1){
      
      total = salario + (ventas * (0.09));
      printf("El salario es %.2f\n", total);

      printf("\nPor favor introduzca las ventas (-1 para terminar): ");
      scanf("%f", &ventas);
   }


   return 0;
 

}




