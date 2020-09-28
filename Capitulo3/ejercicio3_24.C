/*Programa que identifica el número
más grande de un conjunto de números
por entrada*/

#include<stdio.h>



int main(){
   
  /*Difinición de las varianles*/
   int numero;

   int mayor = 0;  
   int contador = 1;



   while (contador <= 10){

      printf("Por favor digite un número: ");
      scanf("%d", &numero);  

      if(numero > mayor){

         mayor = numero;

         }
      contador += 1;

      }

   

   printf("\nEl número mayor es: %d\n\n", mayor);
   return 0;


}










