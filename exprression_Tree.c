#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
struct node
{
    char info;
    struct node *next;
	struct node *right;
	struct node *left;
};

struct node *getnode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}

void insbeg(struct node **start ,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
  *start=p;
}

void insend(struct node **start,int x)
{
  struct node *p,*q;
  q=*start;
  if(q==NULL){
	insbeg(start,x);
  }
  else{
  while(q->next!=NULL)
  {
    q=q->next;
  }
  p=getnode();
  p->info=x;
  p->next=NULL; 
  q->next=p;
  }
}

void traverse(struct node **start)
{
    struct node *p;
    p=*start;
    int c1=0,c2=0,i,j;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        if((p->info)%2==0)
        {
          c1=c1+1;
        }
        else{
          c2=c2+1;
        }
        p=p->next;
    }
    // cout<<c1<<" "<<c2<<endl;
    // cout<<"total no. of the nodes is "<<c1+c2<<endl;
    // while(p!=NULL)
    // {
    //     cout<<p->info<<endl;
    //     p=p->next;
    // }
}

void insafter(struct node **q,int x)
{
    struct node *r,*p,*Z;
    p=getnode();
    p->info=x;
    r=(*q)->next; 
    p->next=r;
    (*q)->next=p; 
}
int delbeg(struct node **start)
{
    struct node *p;
    p = *start;
    (*start) = p->next;
    int x = p->info;
    free(p);
    return x;
}

int delend(struct node **start)
{
    struct node *p, *q;
    p = *start;
    q = NULL;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL;
    int x = p->info;
    free(p);
    return x;
}
void delaft(struct node **q)
{
    struct node *p;
    struct node *r;
    r=(*q);
    p=(*q)->next;
    r->next=p->next;
    free(p);
    //traversing(&(*q));
}
void push(struct node **start,int x)
{
	insend(start,x);
}
struct node* pop(struct node **start)
{
	delbeg(start);
}
int Isempty(struct node **start)
{
	if((*start)==NULL)
	{
		return True;
	}
	else
	{
		return False;
	}
}
int StackTop(struct node **start)
{
	struct node *p;
	p=*start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	return p->info;
}
int pred(char a,char b)
{
	if (a=='^'||a=='*'||a=='/'||a=='%'){
       if (b=='^'){
		return False;
	   }
	   else{
		return True;
	   }
}
else{
  if( b=='+'||b=='-'){
	return True;
  }
  else return False;
}
}
struct node *makenode(char x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->info=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}
void Pre_Order_traversal(struct node *tree)
{
	if((tree)!=NULL)
	{
		printf("%d ",(tree)->info);
		Pre_Order_traversal((tree)->left);
		Pre_Order_traversal((tree)->right);
	}
}
void In_order_traversal(struct node *tree)
{
	if((tree)!=NULL)
	{
		In_order_traversal((tree)->left);
		printf("%d ",(tree)->info);
		In_order_traversal((tree)->right);
	}
}
void Post_order_traversal(struct node *tree)
{
	if((tree)!=NULL)
	{
		Post_order_traversal((tree)->left);
		Post_order_traversal((tree)->right);
		printf("%d ",(tree)->info);
	}
}
int IsOprand(char a)
{
	if(a=='+'||a=='-'||a=='/'||a=='*'||a=='^')
	{
		return False;
	}
	else
	{
		return True;
	}
}
struct node* BuildExpression(char exp[])
{
	struct node *oprand;
	oprand=NULL;
	char opnd[100],symb;
	int i=0;
	while(opnd!='/0')
	{
		symb=exp[i];
		if(IsOprand(symb)==True)
		{
			char x=makenode(symb);
			push(oprand,x);
		}
		else
		{
			while(!Isempty())
		}
	}
}
int main()
{
char exp[100]
gets(exp);
return 0;
}
