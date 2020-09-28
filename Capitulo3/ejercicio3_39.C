/*Cuantos dígitos tiene un
número cuantos dígitos 
del entero son sietes*/



#include<stdio.h>



int main(){


   int numero;
   int dig_1;
   int dig_2;
   int dig_3;
   int dig_4;

   int red_1;
   int red_2;
   int red_3;
   int red_4;


   int total;
   int contador = 0;


   int prueba = 8/7;

  // printf("El valor de prubea es %d\n", prueba);
   printf("Por favor digite un número entero de cinco dígitos\n");
   scanf("%d", &numero);

   dig_1 = numero/10000;
   red_1 = numero%10000;

   dig_2 = red_1/1000;
   red_2 = red_1%1000;

   dig_3 = red_2/100;
   red_3 = red_2%100;

   dig_4 = red_3/10;
   red_4 = red_3%10;

   if( dig_1 == 7){


      contador = contador + 1;
   }


   if( dig_2 == 7){


      contador = contador + 1;

   }


   if( dig_3 == 7){


      contador = contador + 1;


   }



   if( dig_4 == 7){


      contador = contador + 1;


   }


   if( red_4 == 7 ){


      contador = contador + 1;

   }




   if(contador == 0){

      printf("El número no tiene sietes\n");

   }

   if(contador == 1){

      printf("El número tiene un siete\n");

   }

   if(contador == 2){

      printf("El número tiene dos sietes\n");

   }

   if(contador == 3){

      printf("El número tiene trés sietes\n");

   }


   if(contador == 4){

      printf("El número tiene cuatro sietes\n");

   }


   if(contador == 5){

      printf("El número tiene cinco sietes\n");

   }



   return 0;


}



