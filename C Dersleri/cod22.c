#include<stdio.h>
#include <math.h>


int main(){

int a,b,c,k;

for(a=1;a<=9;a++){

    printf("\t%d",a);


}
printf("\n");
for(c=1;c<=9;c++){

    printf("%d",c);

    for(b=1;b<=9;b++){

        if(b>c){
            printf("\t%d",b%c);
        }

        else if(b==c){
            k=sqrt(b);
            printf("\t%d",k*c);
        }

        else if(b<c){
            printf("\t%d",c-b);
        }





    }

    printf("\n");

}



    return 0;
}