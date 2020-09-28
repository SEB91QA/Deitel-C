/*Determinar los dos números
más grandes*/

#include<stdio.h>


int main()

{

   int numero1;
   int numero2;
   int numero3;
   int numero4;
   int numero5;
   int numero6;
   int numero7;
   int numero8;
   int numero9;
   int numero10;

   int mayor1 = 0;
   int mayor2 = 0;

   printf("Por favor digite el primer número:\n");
   scanf("%d", &numero1);
   
   mayor1 = numero1;

   printf("Por favor digite el segundo número:\n");
   scanf("%d", &numero2);
   if(mayor1 < numero2)
   {

      mayor1 = numero2;
      mayor2 = numero1;
   }

   else
   {
      
      mayor2 = numero2;

   }

   printf("Por favo digite el tercer número:\n");
   scanf("%d", &numero3);

   if(mayor1 < numero3)
   {
      mayor2 = mayor1;
      mayor1 = numero3;
   }

   else
   {
   
      if(mayor2 < numero3)
      {

         mayor2 = numero3;

      }         
   }

   printf("Por favor digite el cuarto número:\n");
   scanf("%d", &numero4);

   if(mayor1 < numero4)
   {
      mayor2 = mayor1;
      mayor1 = numero4;
   }

   else
   {

      if(mayor2 < numero4)
      {

         mayor2 = numero4;

      }

   }

   printf("Por favor digite el quinta número:\n");
   scanf("%d", &numero5);

   if(mayor1 < numero5)
   {
      mayor2 = mayor1;
      mayor1 = numero5;
   }

   else
   {

      if(mayor2 < numero5)
      {

         mayor2 = numero5;

      }

   }

   printf("Por favor digite el sexto número:\n");
   scanf("%d", &numero6);

   if(mayor1 < numero6)
   {
      mayor2 = mayor1;
      mayor1 = numero6;
   }

   else
   {

      if(mayor2 < numero6)
      {

         mayor2 = numero6;

      }

   }

  
  printf("Por favor digite el séptimo número:\n");
   scanf("%d", &numero7);

   if(mayor1 < numero7)
   {
      mayor2 = mayor1;
      mayor1 = numero7;
   }

   else
   {

      if(mayor2 < numero7)
      {

         mayor2 = numero7;

      }

   }

  
   printf("Por favor digite el octavo número:\n");
   scanf("%d", &numero8);

   if(mayor1 < numero8)
   {
      mayor2 = mayor1;
      mayor1 = numero8;
   }

   else
   {

      if(mayor2 < numero8)
      {

         mayor2 = numero8;

      }

   }


   printf("Por favor digite el noveno número:\n");
   scanf("%d", &numero9);

   if(mayor1 < numero9)
   {
      mayor2 = mayor1;
      mayor1 = numero9;
   }

   else
   {

      if(mayor2 < numero9)
      {

         mayor2 = numero9;

      }

   }

 
   printf("Por favor digite el décimo número:\n");
   scanf("%d", &numero10);

   if(mayor1 < numero10)
   {
      mayor2 = mayor1;
      mayor1 = numero10;
   }

   else
   {

      if(mayor2 < numero10)
      {

         mayor2 = numero10;

      }

   }


   printf("El pimero número mayor es: %d\n", mayor1);
   printf("El segundo número mayor es: %d\n", mayor2);


   return 0;


}




