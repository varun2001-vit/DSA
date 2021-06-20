#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
}*tail;
void insert_big(void)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		
	}
}
void insert_end(void)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
	  newnode->next=tail->next;
	  tail->next=newnode;
	  tail=newnode;
	}
	
}
void insert_pos(void)
{   int pos,i;
	struct node *newnode,*temp;
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
	{
		insert_big();
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
	    printf("enter the data\n");
	    scanf("%d",&newnode->data);
	    newnode->next=0;
	    temp=tail->next;
	    while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
	newnode->next=temp->next;
	temp->next=newnode;
	}
	
}
void del_big(void)
{
	struct node*temp;
	temp=tail->next;
	if(tail==0)
	{
	printf("empty");	
	}
	else if(temp->next==temp)
	{
		tail=0;
		free(temp);
	}
	else
	{
		tail->next=temp->next;
		free(temp);
	}
}
void del_end(void)
{
	struct node *current,*previous;
	current=tail->next;
	if(tail==0)
	{
		printf("empty");
	}
	else if(current->next=current)
	{
		tail=0;
		free(current);
		
	}
	else
	{
		while(current->next!=tail->next)
		{
			previous=current;
			current=current->next;
		}
		previous->next=tail->next;
		tail=previous;
		free(current);
		
	}
	
}
void del_pos(void)
{
	int pos,i;
	struct node *current,*nextnode;
	current=tail->next;
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
	{
		del_big();
	}
	else
	{
		while(i<pos-1)
		{
			current=current->next;
			i++;
		}
		nextnode=current->next;
		current->next=nextnode->next;
		free(nextnode);
		
	}
	
}
void display()
{
	if(tail==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The elements of list are:\n");
		struct node *ptr = tail->next;
		while(ptr != tail){
			printf("%d--",ptr->data);
			ptr = ptr->next;
		}
		printf("%d--",ptr->data);
	}
}

int main()
{
	int ch;
 while(1)
    {
        printf("\n\n---- circular Linked List(SLL) Menu ----");
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
                        case 1: del_big();
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



