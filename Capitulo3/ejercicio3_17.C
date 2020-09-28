/*Programa que calcula el
numero de litros utilizados
por kilómetro y el promedio
generañ*/

#include<stdio.h>


/*Inicio de la función main*/

int main(){

   /*Declaramos la variables
   de kilometro y litro*/ 
   int kilometro;
   float litro;  
   float promedio;
   float general; 
   


   /*Declaramos e inicializamos
   el contador y la suma de promedios*/
   
   int kilometros = 0;
   int contador = 0;
   float litros = 0.0;

   printf("Por favor introduzca el número de litros: ");
   scanf("%f", &litro);


   while( litro != -1){
      contador = contador + 1;

      printf("Por favor introduzca los kilómetros conducidos: ");
      scanf("%d", &kilometro);
      
      kilometros = kilometros + kilometro;
      litros = litros + litro;
      promedio = (float) kilometro/litro;
      
     
      printf("Los kilometros por litros de este tanque fueron: %f\n\n", promedio);
      
      printf("Por favor introduzca el número de litros: ");
      scanf("%f", &litro);

   }


   if( contador != 0){
   
      general = (float) kilometros/litros;       

      printf("El promedio general es: %f\n", general); 
   }

   else{

   printf("No se introdujeron valores algunos\n");
 
   }


   return 0;


}
