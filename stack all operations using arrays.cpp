#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push(void);
void pop(void);
void display(void);
void peek(void);
int main()
{int choice;
printf("welcome to the stack menu\n");
do
{
printf("\n\n1.push\n2.pop\n3.Peek\n4.display\n5.exit\n");
printf("enter your choices\n");
scanf("%d",&choice);
switch(choice)
{case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
default:printf("wrong choice");
}
}while(choice!=5);
}
//now declaring the functions
void push(void)
{int ele;
printf("enter the element");
scanf("%d",&ele);
if(top==n-1)
{printf("overflow");
}
else 
if(top==-1)
{top=0;
stack[top]=ele;
}
else
{top++;
stack[top]=ele;
}
display();
}
void pop()
{if(top==-1)
printf("underflow");
else
{top--;
}
display();
}
void display(void)
{for(int i=top;i>=0;i--)
printf("%d------",stack[i]);
}
void peek(void)
{printf("%d",stack[top]);
}


