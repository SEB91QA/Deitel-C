/*Suma de los números
de todos los enteros
pares de 2 a 100*/


#include<stdio.h>

int main(){


   int suma = 0;
   int numero;


   for( numero = 2; numero <= 100; numero += 2){

      suma += numero;
      printf("La suma es: %d\n", suma);

   }


   return 0;



}
