#include<stdio.h>


int main()
{

int num1, num2;

printf("Por favor escriba dos entero: \n");

scanf("%d%d", &num1, &num2);

if( (num1 % num2) == 0)
 {

  printf("%d es múltiplo de %d\n", num1, num2);

 } 

if( (num1 % num2) != 0)
 {

  printf("%d no es múltiplo de %d\n", num1, num2);

 }

return 0;

}
