/*Suma una secuencia de números*/


#include<stdio.h>
#include<math.h>


int main()
{


   int n;
   int e;
   int t = 0;

   printf("Por favor introduzca el número de enteros a sumar: ");
   scanf("%d", &n);

   for( int x = 1; x <= n; x++)
   {

      printf("Por favor introduzca el entero a sumar: \n");
      scanf("%d", &e);
      t = t + e;
      //printf("La suma es: %d\n", t); 

   }


   printf("La suma total es: %d\n", t);


   return 0;


}



