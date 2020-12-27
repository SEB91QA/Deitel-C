/*Uso de la función calculaImporte */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>



float calculaImporte( float horas );


int main()
{


   float horas1;
   float horas2;
   float horas3;

   float importe1;
   float importe2;
   float importe3;

   float importetotal;


   /*Primer automóvil*/

   printf("Por favor incluir las horas del primer automovil: ");
   scanf("%f", &horas1);

   importe1 = calculaImporte(horas1);

   printf("\nLas primeras horas son: %.2f\n", importe1);


   printf("\nPor favor incluir las horas del segundo automovil: ");
   scanf("%f", &horas2);

   importe2 = calculaImporte(horas2);

   printf("\nLas segundas horas son: %.2f\n", importe2);


   printf("\nPor favor incluir las horas del tercer automovil: ");
   scanf("%f", &horas3);

   importe3 = calculaImporte(horas3);

   printf("\n Las terceras horas son: %.2f\n", importe3 ); 


   importetotal = importe1 + importe2 + importe3;

   printf("El importe total es: %.2f", importetotal);

/*

   printf("Por favor incluir las horas: ");
   scanf("%f\n", &horas2);
   importe2 = calculaImporte(horas2);

   printf("%f\n", importe2);


*/

/*

   printf("Por favor incluir las horas: ");
   scanf("%f\n", &horas3);
   importe3 = calculaImporte(horas3);



   printf("Automóvil\t Horas\t Importe\n");
   printf("%f\t %f\t %f\n", importe1, importe2, importe3);

*/

   return 0;

}




float calculaImporte( float horas )
{



   float Importe;


   if( horas <=  3.0 )
   {

      Importe = 2.;

   }


   if( horas > 3.0 && horas < 24.0 )
   {


      Importe = 2. + 0.5*(ceil(horas) - 3.);


   }



   if( horas == 24.0 )
   {

      Importe = 10.;

   }

   

   return Importe;

}







