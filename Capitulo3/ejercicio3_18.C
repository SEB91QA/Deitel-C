/*Programa para dicidir si un
cliente excete el límite de crçedito*/


#include<stdio.h>


/*Inicio de la función main*/


int main(){

   /*Número de la cuenta*/
   int cuenta;
   /*Saldo inicial*/
   float saldo;
   /*Elementos cargados*/
   float elementos;
   /*Total de créditos*/
   float creditos;
   /*Límite de crédito*/
   float limite;
   /*Declaramos e inicializamos contador*/
   int contador = 0;
   /*Declaramos el nuevo saldo*/
   float nsaldo;


   /*Introducimos el número de la cuenta*/
   printf("Por favor introduzca el número de cuenta (-1 para terminar): ");
   scanf("%d", &cuenta);

   while( cuenta != -1){
      
      contador += 1;
      
      /*Introducimos el saldo inicial*/
      printf("Por favor introduzca el saldo inicial: ");
      scanf("%f", &saldo);

      /*Introducimos el total de cargos*/
      printf("Por favor introduzca el total de cargos: ");
      scanf("%f", &elementos);

      /*Introduzca el total de créditos*/
      printf("Por favor introduzca el total de créditos: ");
      scanf("%f", &creditos);

      /*Introducimos el límite de créditos*/
      printf("Por favor introduzca el límite de crédito: ");
      scanf("%f", &limite);

      nsaldo = saldo + elementos - creditos;

      if(nsaldo > limite){

         printf("Cuenta: %d\n", cuenta);
         printf("Límite de crédito: %.2f\n", limite);
         printf("Saldo: %.2f\n", nsaldo);
         printf("Límite de crédito excedido\n");

      }

      printf("\nPor favor introduzca el número de cuenta(-1 para terminar): ");
      scanf("%d", &cuenta); 

    }
   
    if ( contador == 0 ){

    printf("No se ha introducido ninguna cuenta");

    }


   return 0;


}



