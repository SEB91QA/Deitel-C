/*Función puntos calidad*/

#include<stdio.h>
#include<math.h>



int puntosCalidad( int promedio );



int main()
{


   int promedio;


   printf("Por favor escriba el promedio del estudiante: \n");
   scanf("%d", &promedio);


   printf("El promedio del estudiante es: %d\n", puntosCalidad( promedio ));











   return 0;



}




int puntosCalidad( int promedio )
{



   if( promedio >= 90 && promedio <= 100 )
   {

      return 4;

   }


   if( promedio >= 80 && promedio <= 89 )
   {


      return 3;

   }


   if( promedio >= 70 && promedio <= 79 )
   {
   
      return 2;

   }


   if( promedio >= 60 && promedio <= 69 )
   {

      return 1;

   }

   else
   {

      return 0;

   }
}
