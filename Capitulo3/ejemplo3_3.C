/*Programa para imprimir los 
resultados de un examen y 
decidir si se cumple el objetivo*/

#include<stdio.h>


/*Inicio de la función main*/
int main(){


   int aprobados = 0;
   int reprobados = 0;
   int estudiantes = 1;
   int resultado;


/*Procesamiento de los 10
estudiantes*/
   while( estudiantes <= 10){
   
      /*Se introducen los valores*/
      printf("Por favor introduzca el resultado(1=aprobado, 2=reprobado): \n");
      scanf("%d", &resultado);

      if( resultado == 1){
         aprobados = aprobados + 1;
      }
      else{
         reprobados = reprobados + 1;
      }

     estudiantes = estudiantes + 1;
 
   }

   printf("Aprobados: %d\n", aprobados);
   printf("Reprobados: %d\n", reprobados);


   if( aprobados >= 8){
   printf("Objetivo alcanzado\n");
   }

   return 0;

}


