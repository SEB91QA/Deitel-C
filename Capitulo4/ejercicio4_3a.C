/*Suma de todos
los enteros impares hasta 99*/


#include<stdio.h>
#include<math.h>


int main()
{

   int suma = 0;
   int cuenta;

   for( cuenta = 1 ;cuenta <= 99; cuenta += 2)
   {

      suma += cuenta;  

   }

   printf("%d\n", suma);

   return 0;

}
