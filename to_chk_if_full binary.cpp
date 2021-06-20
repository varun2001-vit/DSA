#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(char item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;

}
// Insert a node
struct node *insert(struct node *root, int key) {
  // Return a new node if the tree is empty
  if (root == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < root->key)
    root->left = insert(root->left, key);
  else
    root->right = insert(root->right, key);

  return root;
}
bool isFullBinaryTree(struct node * root) {
   if (root == NULL) {
      return true;
   }
   if (root -> left == NULL and root -> right == NULL) {
      return true;
   } else if (root -> left and root -> right) {
      return (isFullBinaryTree(root -> left) and isFullBinaryTree(root -> right));
   }
   return false;
}
unsigned int countNodes(struct node* root)
{
    if (root == NULL)
        return (0);
    else
    return (1 + countNodes(root->left) + countNodes(root->right));
}
 
/* This function checks if the binary tree is complete or not */
bool isComplete (struct node* root, unsigned int index,
                 unsigned int number_nodes)
{
    // An empty tree is complete
    if (root == NULL)
        return (true);
 
    // If index assigned to current node is more than
    // number of nodes in tree, then tree is not complete
    if (index >= number_nodes)
        return (false);
 
    // Recur for left and right subtrees
    return (isComplete(root->left, 2*index + 1, number_nodes) &&
            isComplete(root->right, 2*index + 2, number_nodes));
}
int main() 
{
  struct node *root = NULL;
  int ch,ele;
  do
  {
  
  printf("binary search tree\n ");
  printf("\n 1.insert \n 2.check full \n 3.check complete  \n 4.exit");
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
            
            case 2:  if (isFullBinaryTree(root)) 
			                {  printf( "full binary tree" );
							} 
							else 
							{
                              printf( "not full binary tree" );
                            }
                        break;
                
            case 3:
            	   unsigned int node_count = countNodes(root);
                   unsigned int index = 0;
 
                    if (isComplete(root, index, node_count))
                        printf("The Binary Tree is complete\n");
                    else
                       printf("The Binary Tree is not complete\n");
                    break;
			case 4:
            	     printf("EXIT");
                     break;
            default:
                printf("Entered wrong choice!!!");
                break;
        }
    }while(ch!=4);
return 0;
}
