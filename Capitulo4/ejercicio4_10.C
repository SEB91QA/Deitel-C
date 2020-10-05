/* Promedio de números introducidos*/


#include<stdio.h>
#include<math.h>

int main()
{


   
   /* Entramos el valor de los números enteros calcular promedios*/

   int t = 0;
   int contador = 0;
   int d;
   float p; 

   printf("Por favor digite un entero:\n");
   scanf("%d", &d);

   while( d != 9999 )
   {
      
      t += d;   
      contador++;    
      printf("Por favor digite un entero:\n");
      scanf("%d", &d);

   }

   p = (float) t / contador;

   printf("El promedio de los números es: %f\n ", p);






   return 0;


}

