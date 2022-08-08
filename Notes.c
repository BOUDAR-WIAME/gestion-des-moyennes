#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab1[13],tab2[15] ;
    float min,max,admis ;
    int i=0;
             printf("\n* les moyens des classe 1 *\n");
                   for( i=0 ; i<13 ; i++ ){
                     printf("\n saisir la moyenne d'etudiant %d :  \n", i+1 );
                     scanf("%f", &tab1[i]);
                   }
                   max = tab1[0];
                   min = tab1[0];
                   for( i=1 ; i < 13 ; i++){
                      if( max < tab1[i]){
                        max = tab1[i];
                      }
                   }
             printf("\n la moyenne maximale du classe 1 est : %f \n " , max );
                  for( i = 1 ; i < 13 ; i++){
                     if( min > tab1[i]){
                        min = tab1[i];
                     }
                  }
             printf("\n la moyenne minimale de la classe 1 est : %f \n" , min);
                   admis = 0;
                   for( i = 0 ; i < 13 ; i++){
                      if( tab1[i] >= 10){
                        admis ++ ;
                      }
                    }
             printf("\n le nombre des admis est : %f \n", admis);
             printf("\n***************************************\n");
             printf("\n* les moyens des classe 2 *\n");
                    for( i = 0 ; i < 15 ; i++ )
                       printf("\n saisir la moyenne d'etudiant %d : \n ", i+1 );
                       scanf("%f", &tab2[i]);
                    }
                     max = tab2[0];
                     min = tab2[0];
                     for( i = 1 ; i < 15 ; i++){
                         if( max < tab2[i]){
                            max = tab2 [i];
                         }
                      }
              printf("\n la moyenne maximale du classe 2 est : %f \n " , max );
                    for( i=0 ; i < 15 ; i++){
                        if( min > tab2[i]){
                           min = tab2[i];
                        }
                    }
              printf("\n la moyenne minimale de la classe 2 est : %f \n" , min );
                   admis = 0;
                   for( i = 0 ; i < 15 ; i++){
                      if( tab2[i] >= 10){
                        admis ++ ;
                      }
                   }
              printf("\n le nombre des admis est : %f \n", admis );
   return 0;
}

