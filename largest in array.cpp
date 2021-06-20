#include<stdio.h>
int largest(int);
int main()
{int a,m;
scanf("%d",&a);
m=largest(a);
if(m==0)
printf("perfect");
if(m==1)
printf("not perfect");
}
int largest(int m)
{int flag=0,sum=0;
for(int i=1;i<m;i++)
{if(m%i==0)
sum=sum+i;
}
if(sum==m)
flag=0;
if(sum!=m)
flag=1;
return flag;
}

