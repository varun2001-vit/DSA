#include<stdio.h>
struct data{
	char name[20];
	int age ;
}stud;
void show(struct data st);
int main()
{printf("enter the details");
printf("enter the name\n");
scanf("%s",&stud.name);
printf("enter the age\n");
scanf("%d",&stud.age);
show(stud);
return 0;
}
void show(struct data st)
{printf("%d,%s",st.age,st.name);
}
