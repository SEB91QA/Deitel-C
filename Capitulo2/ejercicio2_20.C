#include<stdio.h>

/*Programa que calcula el diámetro,
circunferencia, y área de un círculo*/

int main()
{

int radio; 
float diametro, circunferencia, area;

//Se dijita el valor del radio
printf("Escriba el valor del radio:\n");
scanf("%d", &radio);


//Se obtiene el valor del diámetro
diametro = 2*radio;
printf("El valor del diámetro es: %f\n", diametro);


//Se obtiene el valor de la circunferencia
circunferencia = 2*3.14159*radio;
printf("El valor de la circunferencia es: %f\n", circunferencia);


//Se obtiene el valor del área
area = 3.14159*radio*radio;
printf("El vaor del área es: %f\n", area);

return 0;


}








