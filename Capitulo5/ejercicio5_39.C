/*Las Torres de Hanoi*/



#include<stdio.h>
#include<stdlib.h>

void movimiento( int n, int inicio, int fin, int temporal ); 


int main(){



   int n;

   printf("Programa que resuelve las torres de Hanoi\n\n");


   printf("Dijite el número de discos: ");
   scanf("%d", &n);

   movimiento( n, 1, 3, 2 );


   return 0;


}




void movimiento( int n, int inicio, int fin, int temporal ){


   if( n == 1){

      printf("Se mueve de %d a %d\n", inicio, fin);
      
      return;

   }

   


   else{ 

      movimiento( n - 1, inicio, temporal , fin);
      
      printf("Se mueve de %d a %d\n", inicio, fin);

      movimiento( n - 1, temporal, fin, inicio );
         
      return;  


   }

}
