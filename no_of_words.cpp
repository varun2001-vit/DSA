#include<stdio.h>
#include<string.h>
int main()
{char a[25];
int b=1;
scanf("%[^\n]s",&a);
for(int i=0;a[i]!='\0';i++)
{if(a[i]==' ')
b++;
}
printf("%d",b);
}
