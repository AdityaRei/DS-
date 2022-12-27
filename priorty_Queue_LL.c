#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
struct node
{
    int info;
    struct node *next;
    struct node *front;
    struct node *rear;
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
struct node* delbeg(struct node **start)
{
    struct node *p;
    p = *start;
    (*start) = p->next;
    int x = p->info;
    return p;
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
void Enqueue(struct node **start,int x)
{
  insend(start,x);
}
struct node* Dequeue(struct node **start)
{
  struct node *p;
  if(*start==NULL)
  {
    printf("Queue Underflow");
  }
  else
  {
    p=delbeg(start);
  }
  return p;
}
int IsEmpty(struct node **start)
{
  if((*start==NULL))
  {
    return True;
  }
  else
  {
    return False;
  }
}
int main(){
  struct node *start=NULL;
  Enqueue(&start,100);
  Enqueue(&start,200);
  Enqueue(&start,300);
  Enqueue(&start,400);
   printf("%d\n",Dequeue(&start)->info);
//    printf("%d\n",Dequeue(&start)->info);
//   printf("%d\n",IsEmpty(&start));
  traverse(&start);
return 0;
}