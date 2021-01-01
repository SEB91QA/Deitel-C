/*Ejercicio 5.14*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main()
{


   
   srand( time(NULL) );


   printf("Número aleatorio entre 2, 4, 6, 8, 10: %d\n", 2 * (1 + rand() % 5) );
   printf("Número aleatorio entre 3, 5, 7, 9, 11: %d\n", 2 * (1 + rand() % 5) + 1 );   
   printf("Número aleatorio entre 6, 10, 14, 18, 22: %d\n", 2 * (2 * (1 + rand() % 5) + 1));


   return 0;


}







