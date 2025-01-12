#include <stdio.h>
#include <math.h>


int main(){

int dizi[6];
int i,j,a,toplam=0;

printf("5 adet sayi giriniz\n");
for(i=0;i<6;i++){
    scanf("%d",&dizi[i]);
}

for(i=0;i<6;i++){
    for(j=i+1;j<6;j++){

        if(dizi[i] == dizi[j])
        {
            toplam++;
            a=dizi[i];

        }

    }


if(toplam == 3)
        {
            printf("%d den %d kadar vardir",a,toplam);
        }




}






    return 0;
}