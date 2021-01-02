/*Función que calcula la hipotenusa*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*Prototipo de fución*/

double hipotenusa( double lado1, double lado2);




int main()
{

   double lado1;
   double lado2;
   double hipo;



   printf("Programa para calcula la hipotenusa de un triángulo rectángulo\n\n");

   printf("Por favor introduzca el primer lado del triángulo: \n");
   scanf("%lf", &lado1);

   printf("Por favor introduzca el segundo lado del triángulo: \n");
   scanf("%lf", &lado2);


   hipo = hipotenusa( lado1, lado2 );

   printf("El valor de la hipotenusa es: %.2lf \n", hipo);


   return 0;

}





double hipotenusa( double lado1, double lado2 )
{


   double hipotenusa2;
   double hipo;

   hipotenusa2 = pow(lado1, 2) + pow(lado2, 2);

   hipo = sqrt(hipotenusa2);

   return hipo;


}




