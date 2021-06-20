#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char a[25];
int l,d,s;
l=d=s=0;
scanf("%[^\n]s",&a);
for(int i=0;a[i]!='\0';i++)
{if(a[i]>='a' && a[i]<='z')
{
l++;}
else if(a[i]>='0' && a[i]<='9')
{
d++;
}
else
{
s++;
}
}
printf("%d%d%d",l," ",d," ",s);
}
