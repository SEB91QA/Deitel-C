/*20 números diferentes */


#include<stdio.h>
#define TAMANIO 20


void lista( const int a[] );


int main(){


   int a[ TAMANIO ] = { 0 };
      
   int i;
   int j;

   
 

   for( i = 0; i < TAMANIO; i++ ){


      printf("\nPor favor digite el número: ");
      scanf("%d", &a[ i ]);
      
      
      /*Verificamos si no está duplicado*/

      int contador = 0;  

      for( j = 0; j <= i; j++ ){


         if( a[ i ] == a[ j ] && i != j ){
             
            contador += 1;
            break;
            

         }

         else{

            continue;

         } 

      }

      if( contador == 0){

         
         printf("El nuevo número es: %d\n", a[ i ]);

      }


   }

   printf("\nLa lista total es: \n");

   lista( a );

   printf("\nLa lista sin repetir es: \n");

   for( i = 0; i < TAMANIO; i++ ){
      
      bool repite = false;  

      for( j = 0; j <= i; j++ ){

         if( a[ i ] == a[ j ] && i != j ){

            repite = true;

         } 
      

      }

      if( repite == false ){


         printf("%4d", a[ i ]);

      }


   }

   return 0;

}


void lista( const int a[] ){


   for( int i = 0; i < TAMANIO; i++ ){

      printf("%4d", a[ i ]);

   }


}



