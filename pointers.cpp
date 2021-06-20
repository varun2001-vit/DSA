#include<stdio.h>
int main()
{int a=10,*b;
b=&a;
printf("%d\n",a);
printf("%d\n",*b);
printf("%x\n",b);
printf("%u\n",b);
return 0;
}
