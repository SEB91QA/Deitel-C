/*Factorial de un número*/



#include<stdio.h>


int main(){


   int numero; 
   int total = 1;
   int factorial; 

   printf("Por favor digite un número para calcular el factorial: \n");
   scanf("%d", &numero);


   printf("\n");

 
   if(numero == 1 || numero == 0){

      factorial = 1;
   }



   else{
   
      int contador = 1;

      while(contador <= numero){

         factorial = total*contador;
         total = factorial;
         contador = contador + 1;

         printf("%d\n", total);

      }

   }   
   
   
   


   printf("El valor del factorial es: %d \n", total);



   return 0;


}




