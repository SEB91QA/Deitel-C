/*Ejemplo de alcance*/


#include<stdio.h>




   void usoLocal( void );
   void usoStaticLocal( void );
   void usoGlobal( void );
   
   int x = 1;                    /*Definición de una variable Global*/

   
   int main()
   {


      int x = 5;                /*Variable local en main*/

      printf( "la local x fuera del alcance de main es %d\n", x);

      {

         int x = 7;


         printf( "la x local en el alcance interno de main es %d\n", x);

      }


      printf( "la x local en el alcance interno de main es %d\n", x);

      
      usoLocal();
      usoStaticLocal();
      usoGlobal();
      usoLocal();
      usoStaticLocal();
      usoGlobal();

      printf( "\nx local en main es%d\n", x);


      return 0;



   }

   void usoLocal( void )
   {


      int x = 25;

      printf( "\nla x local en usoLocal es %d después de entrar a usoLocal\n", x);
      x++;

      printf( "la x local en usoLocal es %d antes de salir de usoLocal\n", x);



   }


   void usoStaticLocal( void )
   {
   

      static int x = 50;  


      printf( "\n la x local estática es %d al entrar a StaticLocal\n ", x);
      x++;

      printf( "la x local estática es %d al salir de StaticLocal\n", x);

   }


   void usoGlobal( void )
   {


      printf( "\nla x global es %d al entrar a usoGlobal\n", x);
      x *= 10;
 
      printf( "la x global es %d al salir de usoGlobal\n", x);



   }


