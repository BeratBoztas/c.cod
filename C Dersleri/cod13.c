#include<stdio.h>

int main(){

int a,b,j,d;
printf("Enter the choice\n1-Draw a circle\n2-Draw a triangle\n3-Draw a square\n4-Exit\n");

scanf("%d",&a);
            

            if(a == 1){

                 printf("Enter the radius of the circle\n");
                 scanf("%d",&b);


            for(d=0;d<b;d++){
                    printf(" ");

            }
            for(d=0;d<b;d++){
                    printf("*");
            }    
            for(d=0;d<b;d++){
                    printf(" ");
            }
            printf("\n");
            for(j=0;j<b;j++){
                printf("*");
                  for(d=0;d<b;d++){
                    printf("   ");
                 }
                printf("*\n");
            }

                for(d=0;d<b;d++){
                                    printf(" ");
                }
                for(d=0;d<b;d++){
                printf("*");
                }
                for(d=0;d<b;d++){
                    printf(" ");
                }

 }
 

        if(a == 2){

            printf("Enter the base and height of the triangle\n");
            scanf("%d",&b);

            for(j=0;j<b;j++){
                         printf("|");
                for(d=0;d<j;d++){
                           printf(" ");
                }
                    printf("\\");
                    printf("\n");

            }                   
                    for(j=0;j<b+1;j++){
                               printf("-");
                    }

        }


        if(a == 3){

            printf("Enter the side length of the square\n");
                   scanf("%d",&b);

            for(j=0;j<5*b+1;j++){
                printf("-");
            }
                printf("\n");


                for(j=0;j<b;j++){
                    printf("|");
                    for(d=0;d<5*b-1;d++){
                        printf(" ");

                    }
                             printf("|");
                    printf("\n");

                }

                    for(j=0;j<5*b+1;j++){
                        printf("-");
                    }

       }



            if(a == 4){
                         printf("Exit");
            }

            







    return 0;
}