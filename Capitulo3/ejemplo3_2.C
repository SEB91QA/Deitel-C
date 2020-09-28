/*Programa para obtener el promedio de calificaciones
una repetición controlada por centinela*/

#include<stdio.h>


/*Función main*/

int main()
{
   int contador;
   int total;
   int calificacion;

   float promedio;

   /*Fase de inicialización*/

   contador = 0;
   total = 0;

   /*Registro de las calificaciones*/

   printf("Introduzca la calificación, o introduzca -1 para terminar");
   scanf("%d", &calificacion);

   /*Se verifica que cumpla con la condición*/

   while( calificacion != -1)
   {
      total = total + calificacion; 
      contador = contador + 1;
      
      /*Se obtiene la siguiente calificación del usuario*/
      printf("Introduzca la calificación, o introduzca -1 para terminar");
      /*Inficador de entrada*/
      scanf("%d", &calificacion);
   }
 
   if( total != 0)
   {
      promedio = (float) total / contador;
      printf("El promedio de las calificaciones es: %.2f\n", promedio); 
   }

   else
   {
 
      printf("No se introdujeron calificaciones\n");
 
   }

   return 0;

}



