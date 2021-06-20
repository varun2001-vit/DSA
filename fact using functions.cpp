#include<stdio.h>
int fact(int);
int main()
{int a=7,b;
b=fact(a);
printf("%d",b);
}
int fact(int a)
{if (a==0)
return 1;
else
return a*fact(a-1);
}
