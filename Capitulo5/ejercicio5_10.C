/*Aplicación de la fución floor*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main()
{


   float numero;
   


   printf("Por favor escriba un número: \n");
   scanf("%f", &numero);

   while( numero != 0)
   {

      float y;

      y = floor(numero + 0.5);

      printf("El número es %.2f y el número redondeado es %.2f\n", numero, y);


      printf("Por favor escriba un número o cero para terminar el programa: \n");  
      scanf("%f", &numero);      

   }


   return 0;


}



