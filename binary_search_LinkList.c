#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
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
  while(q->next!=NULL)
  {
    q=q->next;
  }
  p=getnode();
  p->info=x;
  p->next=NULL; 
  q->next=p;
}

void traverse(struct node **start)
{
    struct node *p;
    p=*start;
    int c1=0,c2=0,i,j;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
    
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
struct node*  middle_point(struct node **start)
{
	struct node *t,*r;
         r=(*start)->next;
		 t=*start;
		 while(r!=NULL&&r->next!=NULL){
			t=t->next;
			r=r->next;
			r=r->next;
}
return t;
}
struct node* binary_search(struct node **start,int x)
{
	  struct node *m=*start;
	  while((*start)->next!=NULL)
	  {
		m=middle_point(start);
		if(m->info==x)
		{
			return m;
		}
		else
		{
			if(x<m->info)
			{
				m->next=NULL;
			}
			else
			{
				*start=m->next;
			}
		}
	  }
	  if((*start)->info==x)
		{
			return *start;
		}
    else
	{
		return NULL;
	}
}
int main()
{
    struct node *start=NULL;
  struct node *p;
	insbeg(&start,600);
    insbeg(&start,500);
    insbeg(&start,400);
    insbeg(&start,300);
    insbeg(&start,200);
    insbeg(&start,100);
	traverse(&start);
	printf("\n");
	p=binary_search(&start,300);
	printf("%d",p->next);
    return 0;
}