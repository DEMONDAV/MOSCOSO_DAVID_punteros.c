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
 printf("%p %C\n", ptr, c);

 float pi=3.14 , dec;
 float *h;
 ptr = &pi;
 dec=*h;
 printf("%p %.5f",h, dec);


return 0;
}
