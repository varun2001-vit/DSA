#include<stdio.h>
#include<stdlib.h>
int main()
{int n,*ptr,sum=0;
printf("enter the value of n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for (int i=0;i<n;i++)
{scanf("%d",(ptr+i));
sum=sum + *(ptr+i);
}
printf("\n%d  ",sum);
free(ptr);
}
