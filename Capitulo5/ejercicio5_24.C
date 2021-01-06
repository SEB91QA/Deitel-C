/*Conversión de Celcius a Fahreheit*/


#include<stdio.h>
#include<math.h>

float celsius( float tfah );
float fah( float tcel );


int main()
{


   printf("Temperatura en Celsius\t Temperatura en Fahreheti\n\n");

   for( int i = 0; i <= 100; i++)
   {
  
      printf("%10dºC%25.2fºF\n", i, fah(i) );


   }


   printf("\nTemperatura en Fahrenheit\t Temperatura en Celsius\n\n");

   for( int j = 32; j <= 212; j++ )
   {

      printf("%10dºF%25.2fºC\n", j, celsius(j) );


   } 

   return 0;

}



float celsius( float tfah )
{


   return (tfah - 32.0 ) * (5./9.);

}

float fah( float tcel )
{


   return (tcel * (9./5.)) + 32.0;

}

