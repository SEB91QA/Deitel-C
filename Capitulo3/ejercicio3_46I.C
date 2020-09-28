/*Encriptación de un  número*/


#include<stdio.h>


int main()
{

   int numero;

   /*Dfinimos los dígitos*/

   printf("Por favor escriba un número de cuatro dígitos: \n");
   scanf("%d", &numero);

   int d1 = numero/1000;
   int d2 = (numero%1000)/100;
   int d3 = ((numero%1000)%100)/10;
   int d4 = ((numero%1000)%100)%10;
   
   

   printf("Primer dígito: %d\n", d1);
   printf("Segundo dígito: %d\n", d2);
   printf("Tercer dígito: %d\n", d3);
   printf("Cuarto dígito: %d\n", d4); 

  /*Número encriptado*/


  int r1 = (d1 + 7)%10;
  int r2 = (d2 + 7)%10;
  int r3 = (d3 + 7)%10;
  int r4 = (d4 + 7)%10;

  /*Intecambio de números*/

  int nuevo_numero = r3*1000 + r4*100 + r1*10 + r2;
  printf("El nuevo número encriptado es: %d\n", nuevo_numero);
  


  return 0;




}
