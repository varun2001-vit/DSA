#include<stdio.h>
int main()
{int n=6,a[6],position;
printf("enter the elements in array");
for (int i=0;i<6;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&position);
n--;
for(int i=position-1;i<n;i++)
 a[i]=a[i+1];

for (int i=0;i<n;i++)
printf("%d\n",a[i]);
}
