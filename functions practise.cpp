#include<stdio.h>
int binary(int);
int main()
{int a;
scanf("%d",&a);
binary(a);
return 0;
}
int binary(int a)
{int b,r;
b=a;
r=b%2;
printf("%d",r);
b=b/2;
while(b)
{r=b%2;
b=b/2;
printf("%d",r);
}
}
