/*Función que calcula la potencia de una función*/


#include<stdio.h>
#include<math.h>



int potenciaInt(int base, int exponente );



int main()
{

   int base;
   int exponente;
   int potencia;


   printf("Por favor introduza la base: \n");
   scanf("%d", &base);

   printf("Por favor introduzca el expeonente: \n");
   scanf("%d", &exponente);

   
   potencia = pow( base, exponente);
   printf("El valor de la potencia es: %d\n", potencia);


   return 0;


}



int poenciaInt(int base, int exponente )
{

   
   int potencia;

   potencia = pow(base, exponente);

   return potencia;
   


}






















