#include<stdio.h>


int main()
{

int uno, dos, tres, cuatro;

printf("Por favor digite en órden los números del 1 al 4\n");

scanf("%d%d%d%d", &uno, &dos, &tres, &cuatro);

printf("Los números del 1 al 4 son: 1,2,3, 4\n");        //Sin especificadores de conversión
printf("Los números del 1 al 4 son: %d, %d, %d, %d\n", uno, dos, tres, cuatro);  //Con cuatro especificadores de conversión
printf("Los números del 1 al 4 son:\n1\n");
printf("2\n");
printf("3\n");
printf("4\n");

return 0;


}

