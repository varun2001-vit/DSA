#include<stdio.h> 
#include<conio.h>
int main()
{int f,t,s,n,i;
printf ("\nENTER THE NUMBER UP TO WHICH TERMS ARE TO BE PRINT");
scanf ("%d",&n);
f=0;
t=1;
printf ("\nFIBONACCI SERIES IS:");
printf ("\n%d",f);
printf ("\n%d",t);
for (i=1;i<=(n-2);i++)
{s=f+t;
printf ("\n%d",s);
f=t;
t=s;
}
return 0;}   
