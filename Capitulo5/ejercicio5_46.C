

#include <stdio.h>
/* la función main comienza la ejecución del programa */ 
int main(){


   int c; /* variable para mantener el carácter introducido por el usuario */

   if ( ( c = getchar() ) != EOF ) { 

      main();
      printf( "%c", c ); 

   } /* fin de if */


   return 0; /* indica terminación exitosa */ 


}/*findemain*/


