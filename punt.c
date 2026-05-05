#include <stdio.h>

int main ()
{
 int num=15, a;
 int *x;
 x = &num; 
 a = *x;
 printf("%p %d\n", x,a);

 char letra='a', c;
 char *ptr;
 ptr = & letra;
 c=*ptr;
 printf("%p %C", ptr, c);

return 0;
}
