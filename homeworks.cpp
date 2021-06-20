#include<stdio.h>
struct data{
	char name[20];
	int age ;
}stud;
struct details
{struct data stud;
int marks;
int gpa;
}st;
int main()
{printf("enter the details");
printf("enter the name\n");
scanf("%s",&st.stud.name);
printf("enter the age\n");
scanf("%d",&st.stud.age);
printf("enter marks and gpa\n");
scanf("%d",&st.marks);
scanf("%d",&st.gpa);
printf("details are");
printf("%s\n",st.stud.name);
printf("%d\n",st.stud.age);
printf("%d\n",st.marks);
printf("%d\n",st.gpa);
return 0;
}
