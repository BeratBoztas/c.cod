#include<stdio.h>


int main(){

int a,b,c;

int dizi[6];

printf("6 Tane sayi giriniz\n");


for(a=0;a<6;a++)
{
scanf("%d",&dizi[a]);
}


printf("Bu sayilardan en buyugu ");

for(b=1;b<6;b++)
{

  if(dizi[b]>dizi[0])
  {
       dizi[0]=dizi[b];

  }
}

printf("%d",dizi[0]);

return 0;

}