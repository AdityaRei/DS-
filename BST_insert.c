#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
    struct node *father;
};

struct node *makenode(int x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
	p->left=NULL;
	p->right=NULL;
    p->father=NULL;
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
// void create_node(struct node **tree)
// {	int choice,x;
// 	struct node *p;
// 	printf("Whether left of %d exist (1/0):",(*tree)->data);
// 	scanf("%d",&choice);
// 	if (choice==1)
// 	{
// 		printf("Input the information of the left node:");
// 		scanf("%d",&x); 
// 		p=makenode(x);
// 		(*tree)->left=p;
// 		create_node(&p);
// 	}
// 	printf("Whether right of %d exist (1/0):",(*tree)->data);
// 	scanf("%d",&choice);
// 	if (choice==1)
// 	{
// 		printf("Input the information of the right node:");
// 		scanf("%d",&x); 
// 		p=makenode(x);
// 		(*tree)->right=p;
// 		create_node(&p);
// 	}
//  }

//  void BST_insert(struct node **tree,int x)
//  {
//  struct node *p,*q;
//  p=*tree;
//  q=NULL;
 
// 	if((*tree)==NULL)
// 	{
// 		*tree=makenode(x);
// 	}
// 	else
// 	{
// 		while(p!=NULL)
// 		{
// 			if(x<p->data)
// 			{
// 				q=p;
// 				p=p->left;
// 			}
// 			else
// 			{
// 				q=p;
// 				p=p->right;
// 			}
// 		}
// 		if(x<q->data)
// 		{
// 			q->left=makenode(x);
// 		}
// 		else
// 		{
// 			q->right=makenode(x);
// 		}
// 	}
//  }

struct node* BST_insert(struct node *root,int x)
{
	if(root==NULL)
	{
		root=makenode(x);	
	}
	if(x<root->data)
	{
		root->left=BST_insert(root->left,x);
	}
	else
	{
		root->right=BST_insert(root->right,x);
	}
	return root;
}


 struct node* minimun(struct node **tree)
 {
    while((*tree)->left!=NULL)
    {
        (*tree)=(*tree)->left;
    }
    return (*tree);
 }

 struct node* maximum(struct node **tree)
 {
    while((*tree)->right!=NULL)
    {
        (*tree)=(*tree)->right;
    }
    return (*tree);
 }

 struct node* BSTSearch(struct node **tree,int key)
 {
    while((*tree!=NULL))
    {
        if((*tree)->data==key)
        {
            return (*tree);
        }
        else if(key<(*tree)->data)
        {
            (*tree)=(*tree)->left;
        }
         else if(key>(*tree)->data)
        {
            (*tree)=(*tree)->right;
        }
        else
        {
            return NULL;
        }
    }
 }

 struct node* BSTsuccessor(struct node **tree)
 {
    struct node *q;
    if ((*tree)->right!=NULL)
    {
        minimun(&(*tree)->right);
    }
    else
    {
        q=(*tree)->father;
    }
    while(q!=NULL&&q->right==(*tree))
    {
        (*tree)=q;
        q=q->father;
    }
    return q;
 }
int main()
{
	struct node *root,*p; 
	int x,y;
	root =NULL;
	
	root=BST_insert(root,100);
	root=BST_insert(root,50);
	root=BST_insert(root,150);
	root=BST_insert(root,40);
	root=BST_insert(root,70);
	root=BST_insert(root,120);
    root=BST_insert(root,300);
    root=BST_insert(root,60);
    root=BST_insert(root,250);
    root=BST_insert(root,55);
    root=BST_insert(root,200);
    root=BST_insert(root,260);


	// BST_insert(&root,100);
	// BST_insert(&root,50);
	// BST_insert(&root,150);
	// BST_insert(&root,40);
	// BST_insert(&root,70);
	// BST_insert(&root,120);
    // BST_insert(&root,300);
    // BST_insert(&root,60);
    // BST_insert(&root,250);
    // BST_insert(&root,55);
    // BST_insert(&root,200);
    // BST_insert(&root,260);
	printf("Pre Order:");
	Pre_Order_traversal(root);
	printf("\nPost Order:");
	Post_order_traversal(root);
	printf("\nIn Order:");
	In_order_traversal(root);
	printf("\n");
	y=count_node(root);
	printf("%d",y);
    //  printf("\nMinimum:%d",minimun(&root)->data);
    //  printf("\nMaximum:%d",maximum(&root)->data);
    p=BSTSearch(&root,60);
    printf("\nThe Successor is:%d",BSTsuccessor(&p)->data);

return 0;
}