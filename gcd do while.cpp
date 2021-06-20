#include<stdio.h>
int main()
{int a,b;
int divisor,rem,dividend;
scanf("%d%d",&a,&b);
dividend=a;
divisor=b;
rem=a%b;
do
{dividend=divisor;
divisor=rem;
rem=dividend%divisor;
}while(rem);
printf("%d",divisor);
return 0;
}
