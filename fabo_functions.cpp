#include<stdio.h>
int fabo(int);
int main()
{int a=7,b;
b=fabo(a);
printf("%d",b);
}
int fabo(int a)
{if (a==0)
return a;
else
return fabo(a-1)+fabo(a-2);
}
