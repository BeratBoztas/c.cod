#include<stdio.h>

int main(){

    int a=1,b=1;


    while(a<10){

        printf("\t%d",a);
        a++;

    }
    printf("\n");
    a=1;


    while(a<10){

        printf("%d",a);
        b=1;
        while(b<10){
            printf("\t%d",a*b);
            b++;




        }


             a++;

        printf("\n");

    }













    return 0;
}