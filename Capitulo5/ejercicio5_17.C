/*Función múltiplo*/


#include<stdio.h>
#include<math.h>


bool multiplo( int numero1, int numero2 );



int main()
{

   int numero1;
   int numero2;
   bool resultado;


   printf("Por favor introduzca el primer número: \n");
   scanf("%d", &numero1);

   printf("Por favor introduzca el segundo número: \n");
   scanf("%d", &numero2);

   resultado = multiplo( numero1, numero2 );

   if(resultado == true)
   {

      printf("%d es múltiplo de %d\n", numero1, numero2);

   }

   else
   {


      printf("%d no es múltiplo de %d\n", numero1, numero2);


   }


   return 0;

}





bool multiplo( int numero1, int numero2)
{


   int multi;

   bool resultado;

   multi = numero1 % numero2;

   if( multi == 0)
   {

      resultado = true;   

   }

   else
   {

      resultado = false;

   }


   return resultado;


}


