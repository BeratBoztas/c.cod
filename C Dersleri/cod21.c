#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

char kelime(){
        char kelime = rand() % 26 + 97;
}












int main(){
int b,c;
srand(time(NULL));
int d = rand() % 12 + 1;
int e = rand() % 15 + 1;
char dizi[30];

for(e=0;e<d;e++){
int a = rand() % 16 + 1;
for(c=0;c<d;c++){
for(b=0;b<a;b++){
char rastgele = kelime(); 

dizi[b]=rastgele;
printf("%c",rastgele);
}
printf(" ");


}

printf("\n");
}










    return 0;
}