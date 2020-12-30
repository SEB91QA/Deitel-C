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
   float horast;


   float importe1;
   float importe2;
   float importe3;
   float importetotal;


   /*Primer automóvil*/

   printf("Por favor incluir las horas del primer automóvil: ");
   scanf("%f", &horas1);


   printf("\nPor favor incluir las horas del segundo automóvil: ");
   scanf("%f", &horas2);

   printf("\nPor favor incluir las horas del tercer automóvil: ");
   scanf("%f", &horas3);


   importe1 = calculaImporte(horas1);
   importe2 = calculaImporte(horas2);
   importe3 = calculaImporte(horas3);

   horast = horas1 + horas2 + horas3;
   importetotal = importe1 + importe2 + importe3;

   printf("%4s%21s%28s\n", "Automóvil", "Horas", "Importe" );
   printf("%s%29.1f%28.2f\n", "1", horas1, importe1);
   printf("%s%29.1f%28.2f\n", "2", horas2, importe2);
   printf("%s%29.1f%28.2f\n", "3", horas3, importe3);   
   printf("Total %24.1f%28.2f\n", horast, importetotal);


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







