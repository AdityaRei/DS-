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
int main()
{
	struct node *root; 
	root=makenode(1);
	root->left=makenode(2);
	root->right=makenode(3);
	Pre_Order_traversal(root);
	printf("\n");
	Post_order_traversal(root);
	printf("\n");
	In_order_traversal(root);
return 0;
}