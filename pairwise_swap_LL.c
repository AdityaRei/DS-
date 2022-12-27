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
void pairwiseSwap(struct node **start)
{
    struct node *p,*q;
    p=*start;
    q=(*start)->next;
    int temp;
    while(q!=NULL)
    {
        temp=p->info;
        p->info=q->info;
        q->info=temp;
        p=p->next;
        p=p->next;
        q=q->next;
        if(q!=NULL)
        {
            q=q->next;
        }
    }
}
int main()
{
    struct node *start=NULL;
    insbeg(&start,600);
    insbeg(&start,500);
    insbeg(&start,400);
    insbeg(&start,300);
    insbeg(&start,200);
    insbeg(&start,100);
    pairwiseSwap(&start);
    traverse(&start);
    return 0;
}