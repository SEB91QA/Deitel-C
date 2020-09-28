/*Determinar si un 
número es palíndromo*/


#include<stdio.h>


int main(){


   int numero;
   /*Definimos los residuos*/
   int res1;
   int res2;
   int res3;
   int res4;
   
   /*Definimos los coeficientes*/
   int cos1;  
   int cos2;
   int cos3;
   int cos4;
 


   printf("Por favor introduzca un número de cinco dígitos\n");
   scanf("%d", &numero);

   cos1 = numero/10000;

   if(cos1 > 0){

      if(cos1 < 10){
 
         res1 = numero%10000;

         cos2 = res1/1000;
         res2 = res1%1000;

         cos3 = res2/100;
         res3 = res2%100;

         cos4 = res3/10; 
         res4 = res3%10;

         if( cos1 == res4){

            if(cos2 == cos4){ 

               printf("El número %d es palíndromo\n", numero);
           
            }   

         }

         else

            printf("El número %d no es palíndromo\n", numero);

      }

   }


   else 

      printf("El número no es de 5 dígitos\n");   
 

   return 0;

}











