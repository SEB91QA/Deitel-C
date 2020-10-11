
/*Modificación de un código switch*/


#include<stdio.h>
#include<math.h>



int main()
{


   int calificacion;
   int cuentaA;
   int cuentaB;
   int cuentaC;
   int cuentaD;
   int cuentaF;

   printf("Por favor introduzca la letra que corresponde a la calificación:\n");
   printf("Introduzca el caracter EOF para finalizar la entrada de datos:\n");

   while( ( calificacion = getchar() ) != EOF )
   { 

      switch( calificacion ) 
      {

         case 'A':
         case 'a':
            ++cuentaA;
            break;

         case 'B':
         case 'b':
            ++cuentaA;
            break;

         case 'C':
         case 'c':
            ++cuentaA;
            break;

         case 'D':
         case 'd':
            ++cuentaA;
            break;

         case 'F':
         case 'f':
            ++cuentaA;
            break;

         case '\n': 
         case '\t':
         case ' ':
            break;

         default:
            printf("Introdujo una letra incorrecta.\n");
            printf("Introduzca una nueva calificación.\n");
            break;

      }

   }



   printf( "\nLos totales por calificacion son:\n" );
   printf( "A: %d\n", cuentaA );   
   printf( "B: %d\n", cuentaB );  
   printf( "C: %d\n", cuentaC );  
   printf( "D: %d\n", cuentaD );  
   printf( "F: %d\n", cuentaF );  


   return 0;


}




