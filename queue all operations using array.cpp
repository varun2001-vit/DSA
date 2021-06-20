#include<stdio.h>
# define n 5
int queue[5];
int front=-1;
int rear=-1;
void enqueue(void);
void dequeue(void);
void display(void);
void peek(void);
int main()
{int choice;
printf("welcome to the queue menu\n");
do
{
printf("\n\n1.enqueue\n2.dequeue\n3.Peek\n4.display\n5.exit\n");
printf("enter your choices\n");
scanf("%d",&choice);
switch(choice)
{case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:peek();
break;
case 4:display();
break;
default:printf("wrong choice");
}
}while(choice!=5);
}
void enqueue(void)
{int ele;
printf("enter element");
scanf("%d",&ele);
if (rear==n-1)
{printf("overflow");
}
else if(front==-1 && rear==-1)
{front=rear=0;
queue[rear]=ele;
}
else
{rear++;
queue[rear]=ele;
}
}
void dequeue(void)
{if(front==-1 && rear==-1)
{printf("underflow");
}
else if(front==rear)
{front=rear=-1;
}
else
{front ++;
}
}
void display(void)
{for(int i=front;i<rear+1;i++)
{printf(" %d",queue[i]);
}
 } 
void peek(void)
{printf("peek value is %d",queue[front]);
}
