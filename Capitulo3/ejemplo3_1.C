/*Programa para obtener promedio
de calificaciones*/


#include<stdio.h>

/*Inicio de la función main*/

int main()
{

int contador;          //Calificacion siguiente
int calificacion;      //Calificacion que entra
int total;             //Suma total de las calificaciones

int promedio;           //Promedio de las calificaciones

/*Inicialización de las variables*/

total = 0;
contador = 1;

/*Fase de procesamiento*/
while(contador <= 10)                       //Se repite hasta que entren todas las calificaciones
{
   printf("Introduzca la calificación: \n");  //Mensaje para introducir la calificación
   scanf("%d", &calificacion);               //Ingreso de la calificacion
   total = total + calificacion;              //Suma la calificacion al total 
   contador = contador + 1;                   //Incrementamos el contador  
} 
/*Cuando ya no se cumple el while salimos*/

promedio = total/10;

printf("El promedio del grupo es: %d\n", promedio);


return 0;
/*Fase de terminación*/


}



















