/*Cociente y residuo */


#include<stdio.h>


int cociente( int a, int b );

int residuo( int a, int b);

//int serie( int c );

int main()
{


   
   int numero;

   int n = 10000;
   int c;


   printf("Por favor digite un número entre 1 y 32767: \n");
   scanf("%d", &numero);


   while( n >= 1 )  
   {

      if( numero >= n )

      {
         c = cociente( numero, n );

         printf("%d\t", c);

         numero = residuo( numero, n );
  
         n = cociente( n, 10 );

      }

      else
      {

         n = cociente( n, 10 );

      }
   

   }


   printf("\n");


   return 0;



}


int cociente( int a, int b )
{

   int cos;

   cos = a/b;


   return cos;

}


int residuo( int a, int b )
{

   int res;

   res = a%b;

   return res;

}





