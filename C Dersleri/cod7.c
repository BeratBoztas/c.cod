#include<stdio.h>
// 1 ile kullanıcının girdigi sayi arasindeki tum asal sayilari bastiran program.
int main(){

int i,k,n,j=1;

printf("Lutfen pozitif bir sayi giriniz\n");
scanf("%d",&n);
printf("2\n");
for(i=3;i<=n;i++)
{
   j = 1;
   for(k=2;k<i;k++)
   {
         if(i % k == 0)

         {
            j = 0;
           

         }



          }

        if(j == 1)
        {
            printf("%d\n",i);
 

        }

   }



    return 0;
}