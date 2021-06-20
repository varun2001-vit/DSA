#include<stdio.h>
int main()
{ int c;
scanf("%d",&c);
if (c<0)
printf("invalid");
else if (c>100)
printf("invalid");
else if(c>90)
printf("A");
else if(c>80)
printf("B");
else if(c>70)
printf("C");
else if(c>60)
printf("D");
else if(c>50)
printf("E");
else
printf("fail");
return 0;
}
