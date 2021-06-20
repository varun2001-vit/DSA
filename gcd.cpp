#include<stdio.h>
int main()
{int a,b;
int divisor,rem,dividend;
scanf("%d%d",&a,&b);
dividend=a;
divisor=b;
rem=a%b;
while(rem)
{dividend=divisor;
divisor=rem;
rem=dividend%divisor;
}
printf("%d",divisor);
return 0;
}
