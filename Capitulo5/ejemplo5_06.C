/*Randomización*/



#include<stdio.h>
#include<stdlib.h>


int main()
{



   int i;
   unsigned semilla;
   

   printf("Introduzca la semilla: ");
   scanf("%u", &semilla);

   srand( semilla );

   for( i = 1; i <= 10; i++ )
   {


      printf("%10d", 1 + rand() % 6);

      if( i == 5 )
      {

         printf("\n");


      }


   }




   return 0;



}
