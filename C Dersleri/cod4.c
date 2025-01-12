#include<stdio.h>


int main(){

int a,b,d=0;

printf("Bir sayi giriniz\n");
scanf("%d",&a);

printf("Girdiginiz sayi %d\n",a);

while(a>=1)
{

   b = a%10;
   d = d*10+b;
   a = a/10;


}
printf("Girdiginiz sayinin tersi %d",d);


    return 0;
}