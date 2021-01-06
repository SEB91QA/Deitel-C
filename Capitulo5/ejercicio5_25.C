/*Numeros flotantes*/


#include<stdio.h>
#include<math.h>


float flotantema( float n1, float n2, float n3 );
float flotanteme( float n1, float n2, float n3 );

int main()
{


   float num1;
   float num2;
   float num3;


   float mayor;
   float menor;

   printf("Por favor digite el primer número: \n");
   scanf("%f", &num1);

   printf("Por favor digite el segundo número: \n");
   scanf("%f", &num2);

   printf("Por favor digite el tercer número: \n");
   scanf("%f", &num3);


   mayor = flotantema( num1, num2, num3 );
   menor = flotanteme( num1, num2, num3 );


   printf("El número mayor es %f y el número menor es %f\n", mayor, menor);



   return 0;


}



float flotantema( float n1, float n2, float n3 )
{

   float mayor;
   float menor;


   if( n1 > n2 && n1 > n3 && n2 > n3)
   {

      mayor = n1;
      menor = n3;

   }

   if( n2 > n1 && n2 > n3 && n1 > n3)
   {

      mayor = n2;
      menor = n3;

   }



   if( n1 > n2 && n1 > n3 && n3 > n2 )
   {

      mayor = n1;
      menor = n2;

   }


   if( n2 > n1 && n2 > n3 && n3 > n1 ) 
   {

      mayor = n2;
      menor = n1;

   }



   if( n3 > n1 && n3 > n2 && n2 > n1 )
   {


      mayor = n3;
      menor = n1;

   }



   if( n3 > n1 && n3 > n2 && n1 > n2 )
   {

      mayor = n3;
      menor = n2;


   }



   return mayor;

}


float flotanteme( float n1, float n2, float n3 )
{

   float mayor;
   float menor;


   if( n1 > n2 && n1 > n3 && n2 > n3)
   {

      mayor = n1;
      menor = n3;

   }

   if( n2 > n1 && n2 > n3 && n1 > n3)
   {

      mayor = n2;
      menor = n3;

   }



   if( n1 > n2 && n1 > n3 && n3 > n2 )
   {

      mayor = n1;
      menor = n2;

   }


   if( n2 > n1 && n2 > n3 && n3 > n1 )
   {

      mayor = n2;
      menor = n1;

   }



   if( n3 > n1 && n3 > n2 && n2 > n1 )
   {

      mayor = n3;
      menor = n1;

   }



   if( n3 > n1 && n3 > n2 && n1 > n2 )
   {

      mayor = n3;
      menor = n2;


   }



   return menor;

}


