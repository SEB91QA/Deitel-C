/* Arreglo para el uso de problemas*/


#include<stdio.h>
#define TOTAL 9





int main(){


   int a[ TOTAL ] = { 0 };
   
   float total;
   

   /*Entramos los comisions de los trabajadores */

   
  

      printf("Por favor digite las ventas totales del trabajador o -1 para terminar: ");
      scanf("%f", &total);


      while (total != -1){


         float comision = 200.0 + total * 0.09;


         if( comision >= 200 && comision <= 299){

            a[ 0 ] += 1;

         }


         else if( comision >= 300 && comision <= 399){

            a[ 1 ] += 1;

         }


        else if( comision >= 400 && comision <= 499){

            a[ 2 ] += 1;

         }


         else if( comision >= 500 && comision <= 599){

            a[ 3 ] += 1;

         }

      
         else if( comision >= 600 && comision <= 699){

            a[ 4 ] += 1;

         }


         else if( comision >= 700 && comision <= 799){

            a[ 5 ] += 1;

         }


         else if( comision >= 800 && comision <= 899){

            a[ 6 ] += 1;

         }


         else if( comision >= 900 && comision <= 999){

            a[ 7 ] += 1;

         }


         else if( comision >= 1000){

            a[ 8 ] += 1;

         }

   
         printf("Por favor digite el comision del trabajador o -1 para terminar: ");
         scanf("%f", &total);   
   

      }


   printf("\n");


   printf("El número de empleados con salarios entre 200 y 299 son: %d\n", a[ 0 ]);
   printf("El número de empleados con salarios entre 300 y 399 son: %d\n", a[ 1 ]);
   printf("El número de empleados con salarios entre 400 y 499 son: %d\n", a[ 2 ]);
   printf("El número de empleados con salarios entre 500 y 599 son: %d\n", a[ 3 ]);
   printf("El número de empleados con salarios entre 600 y 699 son: %d\n", a[ 4 ]);
   printf("El número de empleados con salarios entre 700 y 799 son: %d\n", a[ 5 ]);
   printf("El número de empleados con salarios entre 800 y 899 son: %d\n", a[ 6 ]);
   printf("El número de empleados con salarios entre 900 y 999 son: %d\n", a[ 7 ]);
   printf("El número de empleados con salarios superior a 1000 son: %d\n", a[ 8 ]);


   return 0;

}









