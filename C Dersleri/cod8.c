#include <stdio.h>

int main(){


int a,b;
int dizi[100][100];

for(a=1;a<12;a++){

    dizi[a][1]=1;
    dizi[a][a]=1;
        
    for(b=1;b<=a;b++){

        if(dizi[a][b] ==! dizi[a][1] || dizi[a][b] ==! dizi[a][a]){
            dizi[a][b] = dizi[a-1][b] + dizi[a-1][b-1];
            
        }




       printf("%d ",dizi[a][b]);
        
      }


printf("\n");




}










return 0;

}