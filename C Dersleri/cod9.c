#include <stdio.h>

int main(){


int dizi[5];
int a,b,k;
printf("Enter five integers\n");
scanf("%d%d%d%d%d",&dizi[0],&dizi[1],&dizi[2],&dizi[3],&dizi[4]);

    for(a=0;a<5;a++){

    for(b=a+1;b<5;b++){


        if(dizi[a]<dizi[b]){

            k=dizi[b];
            dizi[b]=dizi[a];
            dizi[a]=k;

        }

             




    }

    printf("%d",dizi[a]);


    }










    return 0;
}