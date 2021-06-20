#include<stdio.h>
int main()
{int a[20],sum=0;
int *p[20];
for(int i=0;i<20;i++)
{a[i]=i+1;
}
for(int i=0;i<20;i++)
{p[i]=&a[i];
}
for(int i=0;i<20;i++)
{sum=sum+*p[i];
}
printf("sum of first 20 numbers is %d\n",sum);
return 0;
}
