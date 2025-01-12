#include<stdio.h>

int main(){

int i,n;
double sonuc=0.0;

printf("1 + 1/2 + 1/3+ 1/4......1/n serisinin toplam degerini hesaplama programdir lutfen bir n degeri giriniz\n");
scanf("%d", &n);

for(i=1;i<=n;i++)
{
  sonuc = sonuc + 1.0/i;    
}

printf("Hesaplanan deger %f",sonuc);

    return 0;
}