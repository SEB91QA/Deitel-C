/*Programa que despliega
el perímetro de un cuadrado*/

/* Se lee el lado de un cuadrado*/
  

#include<stdio.h>


int main(){


   int l;
   int contador = 1;
   int asterisco = 1;
   int vacio = 1;

   printf("Por favor introduzca el lado del cuadrado\n");
   scanf("%d", &l);


   while(contador <= l){



      if(contador == 1){

         while( asterisco <= l){

            printf("*");

            asterisco = asterisco + 1;

         }

      }






      if(contador != 1 || contador != l ){

         while(vacio <= l){


            if(vacio != 1){

               printf("");

            }


            if(vacio == 1 || vacio == l){

               printf("*");

            }

            vacio = vacio + 1;

         }


      }







      if(contador == l){

         while(asterisco <= l){

            printf("*");

            asterisco = asterisco + 1;

         }

      }





      printf("\n");

      contador = contador + 1;
      asterisco =1;

   }

   return 0;


}
