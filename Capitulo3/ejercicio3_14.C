/*Suma de dos 
enteros hasta que entre un valor centinela*/


#include<stdio.h>


/*Inicio de la función main*/
int main(){


   int num1, num2, num, suma;

   /*Se escanean los números*/
   printf("Por favor introduzca el número para iniciar las suma\n");
   scanf("%d", &num);

   while( num != -1 ){
      
      printf("Introduzca el primer número:\n");
      scanf("%d", &num1);

      printf("Introduzca el segundo número:\n");
      scanf("%d", &num2);

      suma = num1 + num2;

      printf("La suma de los número es: %d\n", suma);

      /*Volvemos a introducir el número*/
      printf("Por favor introduzca el número para iniciar la suma\n");
      scanf("%d", &num);

   }

   return 0;


}

