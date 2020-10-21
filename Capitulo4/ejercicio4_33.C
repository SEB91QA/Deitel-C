
/*Imprime los números romanos*/


#include<stdio.h>
#include<math.h>



int main()
{

   for( int n = 1; n <= 10; n++ )
   { 

      switch(n)
      {

         case 1:     
         {   
            for( int i = 1; i <= 10; i++)
            {

               if( i <= 3)
               {

                  for( int j = 1; j <= i; j++)
                  {

                     printf("I");

                  }

                  printf("\n");

               }


               if( i == 4 )
               {

                  printf("IV");
                  printf("\n");
                  continue;

               }

               if( i == 5 ) 
               {

               printf("V");
               printf("\n");
               continue;

               }

               
               if( i >= 6 && i <= 8 )
               {
                  printf("V");
         
                  for( int j = 1; j <= (i-5); j++ )
                  {

                     printf("I");

                  } 
   
                  printf("\n"); 

               }

               if( i == 9 )
               {

                  printf("IX");
                  printf("\n");
                  continue;
               }

               if( i == 10 )
               {

                  printf("X");
                  printf("\n");

               }
            }  
         }            
         break;


          case 2:
          {
             for( int i = 1; i <= 10; i++)
             {

                printf("X");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   { 

                      printf("I");

                   }

                   printf("\n");

                }


                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }

                if( i == 5 )
                {

                printf("V");
                printf("\n");
                continue;

                }


                if( i >= 6 && i <= 8 )
                {
                   printf("V");
   
                   for( int j = 1; j <= (i-5); j++ )
                   {
   
                      printf("I");

                   }

                   printf("\n");

                }

                if( i == 9 )
                {

                   printf("IX");
                   printf("\n");
                   continue;
                }

                if( i == 10 )
                {

                   printf("X");
                   printf("\n");

                }           
               
             }     
                     
          }  
          break;

          case 3:
          {

             for( int i = 1; i <= 10; i++)
             { 
 
                printf("XX");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   {

                      printf("I");

                   }

                   printf("\n");

                }


                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }

                if( i == 5 )
                {

                   printf("V");
                   printf("\n");
                   continue;

                }


                if( i >= 6 && i <= 8 )
                {
                   printf("V");

                   for( int j = 1; j <= (i-5); j++ )
                   {

                      printf("I");

                   }

                   printf("\n");

                }

                if( i == 9 )
                {

                   printf("IX");
                   printf("\n");
                   continue;
                }

                if( i == 10 )
                {

                   printf("X");
                   printf("\n");

                }

             }  

          }
          break;

          case 4:
          {

             for( int i = 1; i <= 9; i++)
             {
 
                printf("XXX");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   {

                      printf("I");

                   }

                   printf("\n");

                }


                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }

                if( i == 5 )
                {

                   printf("V");
                   printf("\n");
                   continue;

                }


                if( i >= 6 && i <= 8 )
                {
                   printf("V");

                   for( int j = 1; j <= (i-5); j++ )
                   {

                      printf("I");

                   }

                   printf("\n");

                }

                if( i == 9 )
                {

                   printf("IX");
                   printf("\n");
                   continue;
                }
               
                /*
                if( i == 10 )
                {
                   break;
                   //printf("XC");
                   //printf("\n");

                }
                */

             }

          }
          printf("XL");
          printf("\n");
          break;
                
          case 5:
          {

             for( int i = 1; i <= 9; i++)
             {
 
                printf("XL");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   {

                      printf("I");

                   }

                   printf("\n");

                }


                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }


                if( i == 5 )
                {

                   printf("V");
                   printf("\n");
                   continue;
                }


                if( i >= 6 && i <= 8 )
                {
                   printf("V");

                   for( int j = 1; j <= (i-5); j++ )
                   {

                      printf("I");

                   }

                   printf("\n");

                }

                if( i == 9 )
                {

                   printf("IX");
                   printf("\n");
                   continue;
                }


             }

          }
          printf("L");
          printf("\n");
          break;

          case 6:
          {
         
             for( int i = 1; i <= 10; i++)
             {
 
                printf("L");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   {

                      printf("I");

                   }

                   printf("\n");

                }


                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }

                if( i == 5 )
                {

                   printf("V");
                   printf("\n");
                   continue;

                }


                if( i >= 6 && i <= 8 )
                {
                   printf("V");

                   for( int j = 1; j <= (i-5); j++ )
                   {

                      printf("I");

                   }
                 
                   printf("\n");

                }

                if( i == 9 )
                {

                   printf("IX");
                   printf("\n");
                   continue;
                }

                if( i == 10 )
                {

                   printf("X");
                   printf("\n");

                }


             }

          }
          break;


          case 7:
          {

             for( int i = 1; i <= 10; i++ )
             {

                printf("L");

                if( i <= 3)
                {

                   for( int j = 1; j <= i; j++)
                   {
 
                      printf("I");

                   }
                   
                   printf("\n");

                }

                if( i == 4 )
                {

                   printf("IV");
                   printf("\n");
                   continue;
                }

                

                if( i == 5 )
                {

                   printf("V");
                   printf("\n");
                   continue;
                }


                if( i >= 6 && i <= 8)
                {

                   printf("V");

                   for(int j = 1; j <= (i-5); j++)
                   {
                   
                      printf("I");

                   
                   }
 
                   printf("\n");

                }

                if( i == 9)
                {

                   printf("IV");
                   printf("\n");

                }


             }

          printf("X");
          printf("\n");
          break;
          }   

          case 8:
          {

             for( int i = 1; i <= 10; i++)
             {
     
                printf("LX");

                if( 1 <= i  && i <= 3 )
                {

                   for( int j = 1; j <= i; j++ )
                   {  

                      printf("I");
 

                   }
 
                   printf("\n");


                }

                if( i == 4)
                {

                   printf("IV");
                   printf("\n");
                   continue;

                }


                if( i == 5)
                {

                   printf("V");
                   printf("\n");
                   continue;

                }


                if( i >= 6 && i <= 8 )
                {

                   printf("V");

                   for( int j = 1; j <= (i - 5); j++)
                   {

                      printf("I");
                   
                   }

                   printf("\n");

                }


                if( i == 9 )
                {

                   printf("IV");
                   printf("\n");
                   continue;
                }

                if( i == 10)
                {

                   printf("X");
                   printf("\n");
                }

             }

          }
          break;


        }

   }   


   return 0;

}
