/* Se lee el lado de un cuadrado*/


#include<stdio.h>


int main(){


   int l;
   int contador = 1;
   int asterisco = 1;

   printf("Por favor introduzca el lado del cuadrado\n");
   scanf("%d", &l);


   while(contador <= l){

      while( asterisco <= l){

         printf("*");

         asterisco = asterisco + 1;

      } 

      printf("\n");      
    
      contador = contador + 1;
      asterisco =1;

   }

   return 0;


}




