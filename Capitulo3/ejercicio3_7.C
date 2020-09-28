


#include<stdio.h>

int main()
{

   int x;
   int y;

   printf("Por favor introduzca el entero x: \n");
   scanf("%d", &x);
   printf("Por favor introduzca el entero y; \n\n");
   scanf("%d", &y);

   int i = 1;
   int potencia = 1;

   potencia *= x;
   i += 1;

   if( i <= y)
   {
   
   printf("%d\n\n", potencia);  

   }



return 0;

}

