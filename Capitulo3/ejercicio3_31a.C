

#include<stdio.h>


int main(){

   int x;
   int y;

   printf("Digite el valor de x");
   scanf("%d", &x);

   printf("Digite el valor de y");
   scanf("%d", &y);


   if( x < 10)           
   if( y > 10)
   printf("*****\n");       //Si se cumplen ambos if
   else
   printf("#####\n");       //Si no se cumple el segundo if
   printf("$$$$$\n");       //Si no se cumple el primer if


   return 0;


}

