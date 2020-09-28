/*Proincremento y Postincremento*/

#include<stdio.h>


/*Inicio de la función main*/
int main()
{
   int c;
   int d;
   
   /*Demuestra el posincremento*/
   c = 5;                          /*Asigna el valor de 5*/
   printf("%d\n", c);              /*Imprime el valor de 5*/
   printf("%d\n", c++);            /*Imprime 5 y hace el posincremento*/
   printf("%d\n\n", c);              /*Imprime 6*/

   /*Demuestra el preincremento*/
   d = 5;                          /*Asigna el valor de 5*/
   printf("%d\n", d);              /*Imprime el valor de 5*/
   printf("%d\n", ++d);            /*preincrementa y después imprime 6*/
   printf("%d\n", d);              /*Imprime 6*/

   return 0;

}







