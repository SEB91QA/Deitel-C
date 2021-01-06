/*Ejercicio conversión de segundos suponiendo hora militar*/




#include<stdio.h>
#include<math.h>


int segundos( int h, int m, int s );


int main()
{


   int hora;
   int hora1;
   int hora2;
   int seg;
   int mins;
   int segs;
   int horad;
   int segd;
   

   printf("Por favor escriba la hora marcada: \n");   
   scanf("%d", &hora);

   printf("Por favor escriba los minutos marcados: \n");
   scanf("%d", &mins);

   printf("Por favor escriba los segundo marcados: \n");
   scanf("%d", &segs);

 
   seg = segundos( hora, mins, segs );

   printf("Los segundos transcurridos desde las 12 son: %d\n\n", seg);

   printf("Por favor escriba la primera hora: \n");
   scanf("%d", &hora1);
   
   printf("Por favor escriba la segunda hora: \n");
   scanf("%d", &hora2);


   if( hora1 < hora2 )
   {
  
      horad = fabs(hora1 - hora2);
     
   }

   else
   {

      horad = fabs(hora2 - hora1);

   }


   segd = segundos( horad, 0, 0 );

   printf("El número de segundos entre las horas 1 y 2 son: %d\n", segd);

   return 0;


}



int segundos( int h, int m, int s )
{

   int nseg;

   nseg = h*3600 + m*60 + s; 


   return nseg;

}

