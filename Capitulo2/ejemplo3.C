#include<stdio.h>
/* Uso de instrucciones if, operadores
   de relación, y operadores de igualdad */  //Utilizar varias líneasi


//Inicio de la función main
int main()       
{

int num1;
int num2;

printf("Introduzca dos enteros, y le diré\n");
printf("las relaciones que satisfacen: ");


scanf("%d%d", &num1, &num2);  //Lectura de los enteros

if( num1 == num2 ){
  printf("%d es igual a %d\n", num1, num2);
}

if( num1 != num2 ){
  printf("%d no es igual que %d\n", num1, num2);   //Solo escribir una instrucción por línea
}

if( num1 < num2 ){
  printf("%d es menor a %d\n", num1, num2);
}

if( num1 > num2 ){
  printf("%d es mayor a %d\n", num1, num2);
}

if( num1 <= num2 ){
  printf("%d es menor o igual a %d\n", num1, num2);
}

if( num1 >= num2 ){
  printf("%d es mayor o igual a %d\n", num1, num2); 
}

return 0;


}




















