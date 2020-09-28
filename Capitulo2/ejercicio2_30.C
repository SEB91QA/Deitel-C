#include<stdio.h>


int main()
{

int num;
int d1;
int r1;

int d2;
int r2;

int d3;
int r3;

int d4;
int r4;

printf("Por favor digite un número de cinco cifras: \n");
scanf("%d", &num);

d1 = num / 10000;
r1 = num % 10000;

d2 = r1 / 1000;
r2 = r1 % 1000;

d3 = r2 / 100;
r3 = r2 % 100;

d4 = r3 / 10;
r4 = r3 % 10;


printf("Los cinco dígitos del número son: \n");
printf("%d\t%d\t%d\t%d\t%d\n", d1, d2, d3, d4, r4); 

return 0;


}


