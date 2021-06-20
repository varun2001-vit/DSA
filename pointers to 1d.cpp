#include<stdio.h>
int main()
{int a[3]={1,2,3};
int *p[3];
for(int i=0;i<3;i++)
{p[i]=&a[i];
printf("%d--%x",*p[i],p[i]);
}
}
