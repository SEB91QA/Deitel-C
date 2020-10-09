/*Qué hacen los siguientes programas*/


#include<stdio.h>
#include<math.h>


int main()
{

   int i = 1;
   int j = 2;
   int k = 3;
   int m = 2;


   //Escribe el valor entero de esta afirmación: Verdadero o Falso

   printf("%d\n", j == 1);                       //Falso
   printf("%d\n", j == 3);                       //Falso
   printf("%d\n", i >= 1 && j < 4);              //Verdadero
   printf("%d\n", m >= 99 && k < m);             //Falso
   printf("%d\n", j >= i || k == m);             //Verdadero
   printf("%d\n", k + m < j || 3 - j >= k);      //Falso
   printf("%d\n", !m );                          //Falso
   printf("%d\n", ! (j - m) );                   //Verdadero
   printf("%d\n", ! (k > m) );                   //Falso
   printf("%d\n", ! (j > k) );                   //Verdadero

   return 0;



}




