/*Función recursiva main*/


#include<stdio.h>



int main1();




int main(){



   static int n = 1;

   ++n;
   printf("%d\n", n);
   
   main();


   return 0;


}


