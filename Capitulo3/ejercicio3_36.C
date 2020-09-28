/*Conversión de Binario a
decimal*/



#include<stdio.h>


int main(){


   int numerob;
   int cos_1;
   int cos_2;
   int cos_3;

   int res_1;
   int res_2;
   int res_3;



   printf("Por favor introduzca un número binario\n");
   scanf("%d", &numerob);

   cos_1 = numerob/1000;
   res_1 = numerob%1000;

   printf("Cociente uno es %d\n", cos_1);
   printf("Residuo uno es %d\n\n", res_1);

   cos_2 = res_1/100;
   res_2 = res_1%100;

   printf("Cociente dos es %d\n", cos_2);
   printf("Residuo dos es %d\n\n", res_2);

   cos_3 = res_2/10;
   res_3 = res_2%10;

   printf("Cociente tres es %d\n", cos_3);
   printf("Residuo tres es %d\n\n", res_3);


   int decimal = (res_3*1) + (cos_3*2) + (cos_2*4) + (cos_1*8);
   printf("El equivalente decimal de %d es %d\n", numerob, decimal);


   return 0;


}




