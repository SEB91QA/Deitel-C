/*Función distancia*/


#include<stdio.h>
#include<math.h>



double distancia( double x1, double y1, double x2, double y2 );



int main(){


   double x1;
   double y1;

   double x2;
   double y2;


   printf("Por favor digita las coordenadas de cada punto\n\n");

   printf("Primer coordenada en x: ");
   scanf("%lf", &x1);

   printf("\n");

   printf("Primera coordenada en y: ");
   scanf("%lf", &y1);

   printf("\n\n");

   printf("Segunda coordenada en x: ");
   scanf("%lf", &x2);

   printf("\n");

   printf("Segunda coordenada en y: ");
   scanf("%lf", &y2);

   printf("\n");

   printf("La distancia entre las coordenadas es: %.2lf\n", distancia( x1, y1, x2, y2 ));




   return 0;




}




double distancia( double x1, double y1, double x2, double y2 ){


   return sqrt( pow( x2 - x1, 2) + pow( y2 - y1, 2 ) );


}


