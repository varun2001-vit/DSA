#include<stdio.h>
int main()
{
int a[5],b,n=5;
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&b);
int i=0;
while(i!=b-1)
{i++;
}
while(i<n)
{a[i]=a[i+1];
i++;
}
n--;
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}

}
