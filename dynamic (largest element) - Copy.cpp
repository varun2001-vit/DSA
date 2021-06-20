#include<stdio.h>
#include<stdlib.h>
int main()
{int *p;
p=(int*)malloc(8*sizeof(int));
for(int i=0;i<8;i++)
{scanf("%d",(p+i));
}
for(int i=0;i<8;i++)
{printf("%d--",*(p+i));
}
for(int i=1;i<8;i++)
{
if(*(p+i)>*(p))
*(p)=*(p+i);
}
printf("\n%d",*(p));
return 0;
}
