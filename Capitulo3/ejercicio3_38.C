/*Programa que despliza asteriscos
de a 10*/



#include<stdio.h>



int main(){


   int contador = 0;
   

   while( contador <= 100){


      printf("*");


      contador = contador + 1;


      if( (contador%10) == 0){

         printf("\n");

      }

   }




   return 0;


}









