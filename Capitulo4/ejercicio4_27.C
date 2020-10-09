/*Triples Pitagóricos*/


#include<stdio.h>
#include<math.h>




int main()
{

   
   int lado1;
   int lado2;
   int hipo;
   int contador = 0;

   /*int lado1c = pow( lado1, 2);
   int lado2c = pow( lado2, 2);
   int hipoc = pow( hipo, 2);*/

   for ( lado1 = 1; lado1 <= 500; lado1++)
   {

      for( lado2 = 1; lado2 <= 500; lado2++)
      {

         for ( hipo = 1; hipo <= 500; hipo++)
         {
            
            int lado1c = pow( lado1, 2);
            int lado2c = pow( lado2, 2);
            int hipoc = pow( hipo, 2);

            if ( (lado1c + lado2c) == hipoc )
            {

               /*
               int lado1c = pow( lado1, 2);
               int lado2c = pow( lado2, 2);
               int hipoc = pow( hipo, 2);*/
               
               printf("Un par de pares pitagóricos son: %d y %d\n", lado1, lado2);
               contador++;

 
            }
      
         }

      }


   }

   printf("El total de pares pitagóricos son: %d\n", contador);

   return 0;



}


