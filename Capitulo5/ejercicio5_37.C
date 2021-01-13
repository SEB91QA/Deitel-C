/*Función potencia como una función recursiva*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int potencia( int base, int exponente );


int main()
{

   int base;
   int exponente;


   printf("Prueba de función recursiva\n\n");
   

   printf("Por favor escribe la base: \n");
   scanf("%d", &base);

   printf("Por favor escribe el exponente \n");
   scanf("%d", &exponente);

   printf("\nEl restulado es: %d\n", potencia(base, exponente));


   return 0;

}



int potencia( int base, int exponente )
{

   if( exponente == 1 ){

      return base;
   }

   else{

      return ( base * potencia( base, exponente - 1) );

   }


}


