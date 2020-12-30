/*Funciones para diferentes tipos de redondeo*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


/*Prototipos de la función*/


float redondeaAentero( float x );
float redondeaAdecimas( float x );
float redondeaAcentecimas( float numero );
float redondeaAmilesimas( float numero );



int main()
{



   float numero;

   printf("Por favor introduzca un número a redondear: \n");
   scanf("%f", &numero);


   while( numero != 0.)
   {

      float z;
      float z1;   
      float z2;
      float z3;  

      z = redondeaAentero( numero );      
      z1 = redondeaAdecimas( numero );
      z2 = redondeaAcentecimas( numero );
      z3 = redondeaAmilesimas( numero );

      printf("El número es %f y el redondeo a un entero es %.1f\n", numero, z);
      printf("El número es %f y el redondeo a un decimal es %.2f\n", numero, z1);
      printf("El número es %f y el redondeo a una centécima es %.3f\n", numero, z2);
      printf("El número es %f y el redondeo a una milésima es %.4f\n", numero, z3);
   


      printf("\nPor favor introduzca un número a redondear: \n");
      scanf("%f", &numero);


   }


   return 0;


}



/*Definición de las funciones*/




float redondeaAentero( float x )
{


   float y;

   y = floor( x  + 0.5 );   


   return y;

}




float redondeaAdecimas( float x )
{


   float y;

   y = floor( (x*10) + 0.5 ) / 10;


   return y;

}



float redondeaAcentecimas( float x )
{

   float y;

   y = floor( (x*100) + 0.5 ) / 100; 


   return y;

}


float redondeaAmilesimas( float x )
{

   float y;

   y = floor( (x*1000) + 0.5 )/ 1000;


   return y;

}




