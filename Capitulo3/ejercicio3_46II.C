/*Desencriptación de un número*/



#include<stdio.h>


int main()
{


   int numero_encriptado;
   printf("Por favor introduzca el número encriptado de cuatro dígitos: \n");
   scanf("%d", &numero_encriptado);

   int r1 = (numero_encriptado)/1000;
   int r2 = (numero_encriptado%1000)/100;
   int r3 = ((numero_encriptado%1000)%100)/10;
   int r4 = ((numero_encriptado%1000)%100)%10;
   
   /*Dígitos encriptado*/

   int n1 = 10 + r1;
   int n2 = 10 + r2;
   int n3 = 10 + r3;
   int n4 = 10 + r4;
   

   /*Dígitos originales*/
  
   int d1 = n1 - 7;
   int d2 = n2 - 7;
   int d3 = n3 - 7;
   int d4 = n4 - 7;

   
   if( d1 >= 10){

      d1 = d1%10;

   }


   if( d2 >= 10){

      d2 = d2%10;

   }


   if( d3 >= 10){

      d3 = d3%10;

   }


    if( d4 >= 10){

      d4 = d4%10;

   }

   /*Reorganizamos los dígitos*/

   int d_t = (d3*1000) + (d4*100) + (d1*10) + d2;

   printf("El número desencriptado es: %d\n", d_t);


   return 0;




}
