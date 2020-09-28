
/*Cálculo de x 
a la potencia de y*/

#include<stdio.h>

/*Inicio de la función main*/
int main()
{
   /*Declaramos las variables*/
   int x, y;
   
   /*Introducimos las variables*/
   printf("Por favor digite el valor de x: \n");
   scanf("%d", &x);
  
   printf("Por favor digite el valor de y; \n");
   scanf("%d", &y);


   /*Inicializamos las variables*/
   int i = 1;
   int potencia = 1;

   /*Obtenemos la potencia hasta cierto punto*/
   while( i <= y )
   {   
      potencia *= x;
      ++i;
   }

   printf("%d\n", potencia);

return 0;

}
