#include<stdio.h>

int main(){

int a,k,sonuc=0;

printf("lutfen 0 ile 500 arasinde bir sayi giriniz\n");
scanf("%d",&a);


if(a>0 && a<500)
{
        while(a>=1)
        {
            k = a%10;
            sonuc = sonuc + k;
            a=a/10;

        }

     printf("Sayinizin rakamlar toplami %d",sonuc);      
}

else
{
  printf("Yanlis deger girdiniz");

}



return 0;

}