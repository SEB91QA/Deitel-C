/* Análisis de resultados en 
un examen */


#include<stdio.h>


int main(){


   int aprobados = 0;
   int reprobados = 0;
   int estudiantes = 1;

   int resultado;


   while(estudiantes <= 10){


      printf("Introduzca el resultado (1=aprobado, 2=reprobado): ");
      scanf("%d", &resultado);


      while (resultado != 1 && resultado != 2){

         printf("Resultado inválido\n");
         printf("Por favor introduzca de nuevo el resultado\n");
         printf("Introduzca el resultado (1=aprobado, 2=reprobado): ");
         scanf("%d", &resultado); 


      }


      if (resultado == 1){

         aprobados = aprobados + 1;

      }


      if (resultado == 2){


         reprobados = reprobados + 1;

      }


      estudiantes = estudiantes + 1;

   }


 
   printf("Aprobados %d\n", aprobados);
   printf("Reprobados %d\n", reprobados);


   if(aprobados > 8){

      printf("Objetivo alcanzado\n");

   }


   return 0;

}






