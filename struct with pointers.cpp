#include<stdio.h>
struct emp
{ int id;
char name[30];
}p[4],*ptr;
int main()
{ptr=&p[0];
for(int i=0;i<4;i++)
{
printf("enter name,marks");
scanf("%s%d",&(ptr+i)->name,&(ptr+i)->id);
}
for(int i=0;i<3;i++)
{
printf("%s-%d\n",(ptr+i)->name,(ptr+i)->id);
}
}

