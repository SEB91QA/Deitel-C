/* Empresa que clasifica los productos*/


#include<stdio.h>
#include<math.h>



int main()
{

   int numero;
   int veces;
   int numero1 = 0;
   int numero2 = 0;
   int numero3 = 0;
   int numero4 = 0;
   int numero5 = 0;



  // printf("\n\nPor favor introduzca el número del producto:\n ");
  // scanf("%d", &numero);
   printf("Por favor digite el número del producto y  las veces que se vedió:\n ");
   scanf("%d%d", &numero, &veces);


   while ( numero != -1)
   {

      //printf("\n\nPor favor introduzca el número del producto:\n ");
      //scanf("%d", &numero);
      
      if( numero >= 1 && numero <= 5)
      {

         switch( numero )
         {

            case 1:
               numero1 += veces; 
               break;

            case 2:
               numero2 += veces;
               break;

            case 3:
               numero3 += veces;
               break;

            case 4:
               numero4 += veces;
               break;

            case 5:
               numero5 += veces;
               break;

         }

      }

      /*printf("\n\nPor favor introduzca el número del producto:\n ");
      scanf("%d", &numero);
      printf("Por favor digite las veces que se vedió el producto:\n ");
      scanf("%d", &veces);*/


      else
      {
         printf("El número del producto no es válido.\n");

      }

      printf("\n\nPor favor introduzca el número del producto y las veces que se vendió:\n ");
      scanf("%d%d", &numero, &veces);
      //printf("Por favor digite las veces que se vedió el producto:\n ");
      //scanf("%d", &veces);



   }
   
   float total1 = (2.98) * numero1;
   float total2 = (4.50) * numero2;
   float total3 = (9.98) * numero3;
   float total4 = (4.49) * numero4;
   float total5 = (6.87) * numero5;

   float total = total1 + total2 + total3 + total4 +  total5; 

   printf("El valor total vendido del producto 1 es: %f\n", total1);
   printf("El valor total vendido del producto 2 es: %f\n", total2);
   printf("El valor total vendido del producto 3 es: %f\n", total3);
   printf("El valor total vendido del producto 4 es: %f\n", total4);
   printf("El valor total vendido del producto 5 es: %f\n", total5);

  
   printf("\nEl valor total que se vendió entre los productos es: %f\n", total);


   return 0;


}




