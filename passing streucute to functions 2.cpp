#include<stdio.h>
struct Student
{
      int  marks;
      char rollno[20];
};
int displayrn(struct Student s){
    return s.marks;
}
const char* displayn(struct Student s){
    char *roll = s.rollno;
    return roll;
}
int main(){
    int x;
    char n[20];
    struct Student s1,s2,s3,s4,s5;
    printf("enter the first student details marks and rollno");
    scanf("%d%s",&s1.marks,&s1.rollno);
    printf("enter second students details");
    scanf("%d%s",&s2.marks,&s2.rollno);
    printf("enter third student details");
    scanf("%d%s",&s3.marks,&s3.rollno);
    printf("enter fourth student details");
    scanf("%d%s",&s4.marks,&s4.rollno);
    printf("enter fifth student details");
    scanf("%d%s",&s5.marks,&s5.rollno);
    printf("%d %s \n",displayrn(s1),displayn(s1));
    printf("%d %s \n",displayrn(s2),displayn(s2));
    printf("%d %s\n",displayrn(s3),displayn(s3));
    printf("%d %s\n",displayrn(s4),displayn(s4));
    printf("%d %s\n",displayrn(s5),displayn(s5));
}
