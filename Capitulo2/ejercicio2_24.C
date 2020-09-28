#include<stdio.h>

/*Programa que lee un entero
y determina si es par o impar*/

int main()
{

int num;

printf("Digite un número: \n");

scanf("%d", &num);

if( (num % 2) == 0)
{

printf("El número es par\n");

}

if( (num % 2) != 0)
{
printf("El número es impar\n");

}



return 0;

}













