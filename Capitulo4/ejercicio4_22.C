/*Promedio de las calificaciones de un grupo*/

#include<stdio.h>
#include<math.h>


int main()
{


   int calificacion;
   int cuentaA = 0;
   int cuentaB = 0;
   int cuentaC = 0;
   int cuentaD = 0;
   int cuentaF = 0;
   int gradetotal = 0;
 
   printf("Introduzca la letra que corresponde a la calificación.\n");
   printf("Introduzca el caracter EOF para finalizar la entrada de datos.\n");



   while( (calificacion = getchar() ) != EOF)
   {

      switch( calificacion )
      {

         case 'A':
         case 'a':
            ++cuentaA;
            gradetotal += 4;
            break;

         case 'B':
         case 'b':
            ++cuentaB;
            gradetotal += 3;
            break;

         case 'C':
         case 'c':
            ++cuentaC;
            gradetotal += 2;
            break;

         case 'D':
         case 'd':
            ++cuentaD;
            ++gradetotal;
            break;

         case 'F':
         case 'f':
            ++cuentaF;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default: 
            printf("Introdujo una letra incorrecta.");
            printf("Introduzca una nueva calificación");
            break;

      }

   }


   printf("\nLos totales por calificación son:\n");
   printf("A: %d\n", cuentaA);
   printf("B: %d\n", cuentaB);
   printf("C: %d\n", cuentaC);
   printf("D: %d\n", cuentaD);
   printf("F: %d\n", cuentaF);

   int gradecount = cuentaA + cuentaB + cuentaC + cuentaD + cuentaF;

   float promedio = ( float ) ( gradetotal) / ( gradecount );

   printf("\nEl promedio total de las calificaciones es: %.1f\n", promedio);

   return 0;

}
