#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
struct node *next;
} *newnode,*temp,*head=NULL,*prev=NULL;
//display
void display(void)
{printf("printing the linked list  ");
temp=head;
while(temp!=0)
{printf("%d--",temp->data);
temp=temp->next;
}
}
// PREV FOR DELETION FROM END
//begining
void insert_big(void)
{newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==NULL)
{head =newnode;
temp=newnode;
}
else
{newnode->next=head;
head=newnode;
}
display();
}
//end
void insert_end(void)
{newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==NULL)
{head =newnode;
temp=newnode;
}
else
{temp=head;
while(temp->next!=0)
{temp=temp->next;
}
temp->next=newnode;
}
display();
}
//at given position
void insert_pos(void)
{int pos,i=1;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the  valid position");
scanf("%d",&pos);
temp=head;
while(i<pos)
{temp=temp->next;
i++;
}
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
display();
}
//deletion at begin
void del_beg(void)
{if(head==NULL)
{printf("empty list");
}
else
{temp=head;
head=head->next;
free(temp);
}
display();
}
//deletion at end
void del_end(void)
{if(head==NULL)
{
printf("empty list");
}
else
{temp=head;
while(temp->next!=0)
{prev=temp;
temp=temp->next;
}
if(temp==head)
{
	head=0;
	free(temp);
}
else
{
	prev->next=NULL;
	free(temp);
}
}
display();
}
// deletion at at poistion
void del_pos(void)
{struct node *nextnode;
int pos,i=1;
if(head==NULL)
{
printf("empty list");
}
else
{printf("enter the position");
scanf("%d",&pos);
temp=head;
while(i<pos-1)
{temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
}
display();
}
int main()
{ 
int ch;
 while(1)
    {
        printf("\n\n---- Singly Linked List(SLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);
 
        switch(ch)
        {
            case 1:
                    printf("\n---- Insert Menu ----");
                    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
                    printf("\n\nEnter your choice for insertion(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: insert_big();
                                break;
                        case 2: insert_end();
                                break;
                        case 3: insert_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
 
            case 2: display();
                    break;
 
            case 3: printf("\n---- Delete Menu ----");
                    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
                    printf("\n\nEnter your choice for deletion(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: del_beg();
                                break;
                        case 2: del_end();
                                break;
                        case 3: del_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
            case 4: exit(0);
                    default: printf("Wrong Choice!!");
        }
}
return 0;
}





