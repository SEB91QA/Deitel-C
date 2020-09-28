/*Cálculo de circunferencia, y 
área y díametro de una circulo*/


#include<stdio.h>



int main()

{

   float radio;
   float pi = 3.14159;


   printf("Por favor digite el radio del círculo\n\n");
   scanf("%f", &radio);

   float diametro = 2*radio;
   printf("El diámetro del círculo es: %f\n", diametro);

   float circunferencia = 2*pi*radio;
   printf("La circunferencia es: %f\n ", circunferencia);

   float area = pi*(radio*radio);
   printf("El área del círculo es: %f\n", area);
   

   return 0;


}
