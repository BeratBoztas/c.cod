#include<stdio.h>

int main(){

int a,b,c;

for(a=1;a<=9;a++){

    printf("\t%d",a);


}
printf("\n");
for(c=1;c<=9;c++){

    printf("%d",c);

    for(b=1;b<=9;b++){

        printf("\t%d",c*b);

    }

    printf("\n");

}



    return 0;
}