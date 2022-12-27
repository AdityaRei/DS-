#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};

struct node *makenode(int x)
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=x;
p->left=NULL;
p->right=NULL;
return p;
}
void Pre_Order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	printf("%d ",(tree)->data);
	Pre_Order_traversal((tree)->left);
	Pre_Order_traversal((tree)->right);
}
}
void In_order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	In_order_traversal((tree)->left);
	printf("%d ",(tree)->data);
	In_order_traversal((tree)->right);
}
}
void Post_order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	Post_order_traversal((tree)->left);
	Post_order_traversal((tree)->right);
	printf("%d ",(tree)->data);
}
}
int count_node(struct node *tree)
{
if((tree)==NULL)
{
	return 0;
}
else{
	return 1+count_node(tree->left)+count_node(tree->right);
}
}
void create_node(struct node **tree)
{	int choice,x;
struct node *p;
printf("Whether left of %d exist (1/0):",(*tree)->data);
scanf("%d",&choice);
if (choice==1)
{
	printf("Input the information of the left node:");
	scanf("%d",&x); 
	p=makenode(x);
	(*tree)->left=p;
	create_node(&p);
}
printf("Whether right of %d exist (1/0):",(*tree)->data);
scanf("%d",&choice);
if (choice==1)
{
	printf("Input the information of the right node:");
	scanf("%d",&x); 
	p=makenode(x);
	(*tree)->right=p;
	create_node(&p);
}
}
int main()
{
struct node *root; 
int x,y;
root =NULL;
printf("Input the information of root node:");
scanf("%d",&x);
root=makenode(x);
create_node(&root);
printf("Pre Order:");
Pre_Order_traversal(root);
printf("\nPost Order:");
Post_order_traversal(root);
printf("\nIn Order:");
In_order_traversal(root);
printf("\n");
y=count_node(root);
printf("%d",y);
return 0;
}