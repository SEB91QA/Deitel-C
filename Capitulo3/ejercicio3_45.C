/*Lados de un triángulo
rectángulo para variables de tipo
entero*/



#include<stdio.h>


int main()
{


   int a;
   int b;
   int c;


   printf("Por favor escriba el valor del primer lado: \n");
   scanf("%d", &a);

   printf("Por favor escriba el valor del segundo lado: \n");
   scanf("%d", &b);

   printf("Por favor escriba el valor del tercer lado: \n");
   scanf("%d", &c);


   
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





   
   if(a > b  && a > c){

      float a_2 = a*a;
      float bc_2 = b*b + c*c;

      if(a_2 == bc_2){

         printf("Representan los lados de un tríangulo rectángulo\n");

      }


      else{

         printf("No representan los lados de un triángulo rectángulo\n");

      }


   }










   return 0;



}



