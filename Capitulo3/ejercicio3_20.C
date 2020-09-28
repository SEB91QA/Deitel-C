/*Cálculo de la tasa de interés*/


#include<stdio.h>


/*Inicio de la función main*/


int main(){


   /*Definimos las variables*/
   float prestamo;
   float tasa;
   float dias;
   float interes;

   printf("Introduzca el moento del préstamos (-1 para terminar): ");
   scanf("%f", &prestamo);

   while ( prestamo != -1){

      printf("Introduzca a tasa de interés: ");
      scanf("%f", &tasa);
      
      printf("Introduzca el periodo del préstamo en días: ");
      scanf("%f", &dias);

      interes = prestamo * tasa * dias / 365;
      printf("El monto del interés es $%.2f\n", interes);


      printf("\nIntroduzca el moento del préstamos (-1 para terminar): ");
      scanf("%f", &prestamo);


   }


   return 0;

}







