#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* char a[10]="merhaba";

   printf("%s",a);
   printf("%c",a[1]);
   */
   char a[100] ="merhaba";
   char *pi;
    pi =&a[0];
printf("%c",*pi);

    return 0;
}
