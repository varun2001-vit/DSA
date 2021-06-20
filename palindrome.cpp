#include<stdio.h>
int main()
{int start,end,temp,reverse,rem;
printf("enter the start");
scanf("%d",&start);
printf("enter the end");
scanf("%d",&end);
for(int i=start;i<=end;i++)
{temp=i;
reverse=0;
while(temp)
{rem=temp%10;
reverse=rem+reverse*10;
temp=temp/10;
}
if(i==reverse)
{printf("  %d",i);
}
}
}
