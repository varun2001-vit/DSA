#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};

struct node* create(void)
{
	int x;
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data(-1 for no node)");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("enter the left child of %d\n",x);
	newnode->left=create();
	printf("enter the right child of %d\n",x);
	newnode->right=create();
	return newnode;
	
}
void preorder(struct node *ptr)
{
if(ptr==NULL)
{
        return;
}
else
 {
		printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
}
}
void inorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }    
}
void postorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }    
}
int main(){
    struct node *root=NULL;
    int ch;
    do
    {
        printf("**Binary Tree Menu***\n");
        printf("1. Create a binary tree\n");
        printf("2. Preorder traversal\n");
        printf("3. Inorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("0. Exit......\n");
        printf("Enter your choice....\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            root = create();
            break;
        case 2:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            preorder(root);
            }
            break;
        case 3:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            inorder(root);
            }
            break;
        case 4:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            postorder(root);
            }
            break;
        case 0:
            break;
        default:
            printf("Entered wrong choice!!!\n");
            break;
        }
    } while (ch!=0);
    return 0;
}

