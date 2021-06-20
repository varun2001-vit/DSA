#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;

}
struct node *insert(struct node *root, int key) {

  if (root == NULL) return newNode(key);

  
  if (key < root->key)
    root->left = insert(root->left, key);
  else
    root->right = insert(root->right, key);

  return root;
}
struct node *minValueNode(struct node *root) {
  struct node *current = root;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}
// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL) return root;

  
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
void inorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        inorder(ptr->left);
        printf("%d",ptr->key);
        inorder(ptr->right);
    }
}
void preorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        printf("%d",ptr->key);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d",ptr->key);
    }
}

// Driver code
int main() 
{
  struct node *root = NULL;
  int ch,ele;
  do
  {
  
  printf("binary search tree\n ");
  printf("\n 1.insert \n   2.delete \n 3.ineorder \n 4.preorder \n 5.postorder\n 6.exit");
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch) {
            case 1:
                printf("Enter the data you want to insert");
                scanf("%d",&ele);
                if(root==NULL){
                	root=newNode(ele);
                	printf(" first node inserted\n");
                    
                }else
                    {  
                               struct node * temp;  
                               temp=insert(root,ele);
                               if(temp==NULL)
                               {
                               	printf("tree is empty\n");
							   }
							   else
							   {
							   	 printf("element inserted\n");
							   }
                    	
					}
                break;
            
            case 2:
                if(root==NULL){
                    printf("Tree is empty\n");
                }
                else{
                printf("Enter the data to be deleted");
                scanf("%d",&ele);
                root = deleteNode(root,ele);
                }
                break;
            case 3:
                if(root==NULL){
                    printf("Tree is empty\n");
                }else{
                    printf("Inorder Traversal:\n");
                    inorder(root);
                }
                break;
            case 4:
                if(root==NULL){
                    printf("Tree is empty\n");
                }else{
                    printf("Preorder Traversal:\n");
                    preorder(root);
                }
                break;
            case 5:
                if(root==NULL){
                    printf("Tree is empty\n");
                }else{
                    printf("Postorder Traversal:\n");
                    postorder(root);
                }
                break;
            case 6:
            	printf("EXIT");
                break;
            default:
                printf("Entered wrong choice!!!");
                break;
        }
    }while(ch!=6);
return 0;
}
