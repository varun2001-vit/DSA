#include<stdio.h>
int main()
{int a[5],b,flag=1;
printf("enter the elements");
for(int i=0;i<5;i++)
{scanf("%d",&a[i]);
}
printf("enter the element");
scanf("%d",&b);
for(int i=0;i<5;i++)
{ if(a[i]==b)
{
flag=1;
break;
}
else
flag=0;
}
if(flag==1)
{printf("element found");
}
else
{printf("element not found");
}

return 0;
}
