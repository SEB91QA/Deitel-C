/*Lados que cumplen 
con el teorema de pitágoras*/



#include<stdio.h>



int main()
{

   float a;
   float b;
   float c;


   printf("Por favor ingrese el valor de a: \n");
   scanf("%f", &a);

   printf("Por favor ingrese el valor de b: \n");
   scanf("%f", &b);

   printf("Por favor ingrese el valor de c: \n");
   scanf("%f", &c);


   if(c > a  && c > b){

      float c_2 = c*c;
      float ab_2 = a*a + b*b; 

      if(c_2 == ab_2){

         printf("Representan los lados de un tríangulo rectángulo\n");

      }


      else{

         printf("No representan los lados de un triángulo rectángulo\n");

      }


   }


   if(a > c  && a > b){

      float a_2 = a*a;
      float bc_2 = b*b + c*c;

      if(a_2 == bc_2){

         printf("Representan los lados de un tríangulo rectángulo\n");

      }


      else{

         printf("No representan los lados de un triángulo rectángulo\n");

      }


   }


   if(b > a  && b > c){

      float b_2 = b*b;
      float ac_2 = a*a + c*c;

      if(b_2 == ac_2){

         printf("Representan los lados de un tríangulo rectángulo\n");

      }


      else{

         printf("No representan los lados de un triángulo rectángulo\n");

      }


   }
   





   return 0;



}
