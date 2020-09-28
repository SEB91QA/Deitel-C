/*Programa que realiza
el pago por horas de un
trabajador*/


#include<stdio.h>


int main(){


   /*Definimos las variables*/
   int horas;
   float pago;
   float salario;

   printf("Por favor introduzca el número de horas laboradas (-1 para terminar): ");
   scanf("%d", &horas);

   while( horas != -1 ){

   printf("Por favor introduzca el pago por hora del empleado: ");
   scanf("%f", &pago);

   
   if(horas <= 40){

   salario = pago * horas;
   printf("El salario es: %.2f\n", salario);


   }

   else{

      salario = 40*pago + (horas - 40)*(pago * 1.5);
      printf("El salario es: %.2f\n", salario);

   } 

   
   printf("\nPor favor introduzca el número de horas laboradas (-1 para terminar): ");
   scanf("%d", &horas);

   }   


   return 0;

}


