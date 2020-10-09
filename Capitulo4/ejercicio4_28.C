/*Ejercicio de pago a empleados*/



#include<stdio.h>
#include<math.h>

/*
Código por trabajador

Administradores: 1
Empleados:       2
Comisión:        3
Destajo:         4
*/


/*Necesitamos las horas trabadas*/

int codigo;
//float salario;
int horas;
float salario;
int ventas;
int piezas;


int gerentet = 0;
int empleadoh = 0;
int empleadov = 0;
int empleadoen = 0;

int main()
{

   printf("Por favor introduzca el código del empleado: ");
   scanf("%d", &codigo);


   if( codigo >= 1 && codigo <= 4 )
   {

      while( codigo != -1)
      { 
   
         switch( codigo )
         {    

            case 1:
               printf("Empleado gerente.\n");
               printf("El salario del gerente es de: $10000000\n");
               gerentet++;
               break; 

            case 2:
               printf("Empleado por horas.\n");
               empleadoh++;
               printf("Por favor digite el número de horas trabajadas: ");
               scanf("%d", &horas);
 
               if( horas <= 40)
               {
               
                  printf("El salario del empleado es: $700000");

               }

               
               if( horas > 40)
               {

                  salario = 700000. + 1.5 * (horas - 40) * 70000.;       
                  printf("El salario del empleado es: $%.2f\n", salario);
               }
               break;

            case 3:
               printf("Empleado por ventas.\n");
               empleadov++;
               printf("Por favor digite el valor total de ventas realizadas por el empleado: \n");
               scanf("%d", &ventas);
            
               salario = 250000. + (0.057)*ventas;         
               printf("El salario del empleado es: $%.2f\n", salario);
               break;

            case 4:
               printf("Empleado ensamblador.\n");
               empleadoen++;
               printf("Por favor digite el número de piezas ensambladas por el empleado: \n");
               scanf("%d", &piezas);

               salario = 5000. * piezas;
             
               printf("El salario del empleado es: $%.2f", salario);
               break;

         }

      
      printf("\n\nPor favor introduzca el código del empleado: ");
      scanf("%d", &codigo);

      }

   }


   printf("Número de gerentes: %d\n", gerentet);
   printf("Número de empleados por horas: %d\n", empleadoh);
   printf("Número de empleados por ventas: %d\n", empleadov);
   printf("Número de ensambladores: %d\n", empleadoen);

   return 0;


}



