/*Patron de asteriscos*/
  

#include<stdio.h>


int main(){


   int l;
   int contador = 1;
   int asterisco = 1;

   printf("Por favor escribir el lado del patrón\n");
   scanf("%d", &l);

   while(contador <= l){

      if((contador%2) != 0){

         while(asterisco <= l){

            printf("* ");

            asterisco = asterisco + 1;

         }

      }


      if((contador%2) == 0){

         while(asterisco <= l){

            printf(" *");

            asterisco = asterisco + 1;

         }

      }

      printf("\n");

      contador = contador + 1;
      asterisco = 1;

   }

   return 0;


}
