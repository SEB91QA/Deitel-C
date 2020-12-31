/*Programa aleatorio*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main()
{



   srand( time(NULL) );


   printf("Número aleatorio entre 1 y 2: %d\n", 1 + ( rand() % 2 ) );
   printf("Número aleatorio entre 1 y 100: %d\n", 1 + ( rand() % 100 ));
   printf("Número aleatorio entre 0 y 9: %d\n", 0 + ( rand() % 9 ));
   printf("Número aleatorio entre 1000 y 1112: %d\n", 1000 + ( rand() % 112 ));
   printf("Número aleatorio enre -1 y 1: %d\n", -1 + ( rand() % 3 ));   
   printf("Número aleatorio entre -3 y 11: %d\n", -3 + ( rand() % 15));

   return 0;


}









