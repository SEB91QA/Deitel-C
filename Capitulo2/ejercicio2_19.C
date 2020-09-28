#include<stdio.h>


int main()
{

printf("Escriba tres enteros diferentes:\n");

int num1, num2, num3;
int suma, promedio, producto;


printf("Introduzca el primer entero:\n");
scanf("%d", &num1);

printf("Introduzca el primer entero:\n");
scanf("%d", &num2);

printf("Introduzca el primer entero:\n");
scanf("%d", &num3);

suma = num1 + num2 + num3;

printf("La suma de los números es: %d\n", suma);


promedio = (num1+num2+num3)/3;

printf("El promedio de los números es: %d\n", promedio);


producto = num1*num2*num3;

printf("El producto de los números es: %d\n", producto);

/*num3 es el mayor y num1 es el menor*/

if(num2 < num3)
{
  if(num1 < num3)
   {
    if(num1 < num2)
     {
    printf("El número más pequeño es: %d\n", num1);
    printf("El número más grande es: %d\n", num3);
     }
   }
}

/*num2 es el mayor y num1 es el menor*/

if(num3 < num2)
{
  if(num1 < num2)
   {
    if(num1 < num3)
     {
    printf("El número más pequeño es: %d\n", num1);
    printf("El número más grande es: %d\n", num2);
     }
   }
}

/*num3 es el mayor y num2 es el menor*/

if(num2 < num3)
{
  if(num1 < num3)
   {
    if(num2 < num1)
     {
    printf("El número más pequeño es: %d\n", num2);
    printf("El número más grande es: %d\n", num3);
     }
   }
}

/*num1 es el mayor y num3 es el menor*/

if(num2 < num1)
{
  if(num3 < num1)
   {
    if(num3 < num2)
     {
    printf("El número más pequeño es: %d\n", num3);
    printf("El número más grande es: %d\n", num1);
     }
   }
}

/*num2 es el mayor y num3 es el menor*/

if(num3 < num2)
{
  if(num1 < num2)
   {
    if(num3 < num1)
     {
    printf("El número más pequeño es: %d\n", num3);
    printf("El número más grande es: %d\n", num2);
     }
   }
}

/*num1 es el mayor y num2 es el menor*/

if(num3 < num1)
{
  if(num2 < num1)
   {
    if(num2 < num3)
     {
    printf("El número más pequeño es: %d\n", num2);
    printf("El número más grande es: %d\n", num1);
     }
   }
}

return 0;

}

