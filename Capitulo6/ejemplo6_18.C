/*Ejemplo de un arreglo de doblre subíndice*/


#include<stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4


/*Prototipos de función*/

int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );
int maximo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );

double promedio( const int conjuntoDeCalificaciones[], int examenes );

void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes );



int main(){


   int estudiante;

  
   /*Inicializa las calificaiones para tres estudiantes*/
   const int calificacionesEstudiantes[ ESTUDIANTES ][ EXAMENES ] = 
      { { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } };

   
   /*Arreglo de las calificaciones*/
   printf("El arreglo es:\n");
   despliegaArreglo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES );

   /*Determina el valor más pequeño y el valor más grande de las calificaciones*/
   printf("\n\nCalificación más baja: %d\nCalificación más alta: %d\n",
      minimo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ),
      maximo( calificacionesEstudiantes, ESTUDIANTES, EXAMENES ) );

   /*Promedio de las calificaciones de cada estudiante*/
   for ( estudiante = 0; estudiante < ESTUDIANTES; estudiante++ ){

      printf("El promedio de calificación del estudiante %d es %.2f\n",
         estudiante, promedio( calificacionesEstudiantes[ estudiante ],
         EXAMENES ) );

   }



   return 0;


}


int minimo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes ){



   int i;
   int j;
   int califBaja = 100;       /*Inicializamos*/


   for ( i = 0; i < alumnos; i++ ){

      for ( j = 0; j < examenes; j++ ){ 

         if ( calificaciones[ i ][ j ] < califBaja ){

            califBaja = calificaciones[ i ][ j ];


         }


      }


   }


   return califBaja;


}


int maximo( const int calificaciones[][ EXAMENES ] , int alumnos, int examenes ){



   int i;
   int j;
   int califAlta = 0;


   for ( i = 0; i < alumnos; i++ ){

      for ( j = 0; j < examenes; j++ ){

         if ( calificaciones[ i ][ j ] > califAlta ){

            califAlta = calificaciones[ i ][ j ];   

         }

      }

   }


   return califAlta;

}


/*Promedio para cada estudiante*/


double promedio( const int conjuntoDeCalificaciones[], int examenes ){


   int i;
   int total = 0;


   for ( i = 0; i < examenes; i++ ){

      total += conjuntoDeCalificaciones[ i ];

   }


   return ( double ) total / examenes;

}



void despliegaArreglo( const int calificaciones[][ EXAMENES ], int alumnos, int examenes ){


   int i;
   int j;

   /* muestra el encabezado de las columna */
   printf("                             [0]  [1]  [2]  [3]" );


   for ( i = 0; i < alumnos; i++ ){


      printf("\ncalificacionesEstudiantes[%d] ", i );


      for ( j = 0; j < examenes; j++ ){

         printf("%-5d", calificaciones[ i ][ j ] );
   
      }



   }



}

