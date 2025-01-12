#include <stdio.h>

void gcd(int num1, int num2){

int i,j,k,l;

if(num1>num2){
    k=num2;
    num2=num1;
    num1=k;
}

for(j=2;j<=num1;j++){

if(num1 % j ==0 && num2 % j == 0){
    i=j;
    l=2;
}

}

if(l ==2){
    printf("%d",i);
}

if(num2%num1 ==!0 ){
    l=3;
}

if(l==3){
    printf("1");
}

}





void lcm(int num1, int num2){

int i,j,k,l,z;

if(num1>num2){
    k=num2;
    num2=num1;
    num1=k;
}

for(j=2;j<=num1;j++){

if(num1 % j ==0 && num2 % j == 0){
    i=j;
    l=2;
}

}

if(l ==2){
   z= (num1/i)*(num2/i)*i;
   printf("%d",z);
}

if(num2%num1 ==!0 ){
    l=3;
}

if(l==3){
    z=num1*num2;
    printf("%d",z);
}

}













int main(){

int a;

printf("Choose an opration to perform :\n1 - Compute the Greatest connon civisior\n2 - Compute the least connon multiplier\n");
scanf("%d",&a);
if(a == 1){
 int b,c,d;
printf("Enter two integers\n");
scanf("%d%d",&b,&c);
gcd(b,c);
}


if(a == 2){
 int b,c,d;
printf("Enter two integers\n");
scanf("%d%d",&b,&c);
lcm(b,c);


}


    return 0;
}