#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
	int power;
    struct node *next;
};

struct node *getnode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}

void insbeg(struct node **start ,int x,int y)
{
    struct node *p;
    p=getnode();
    p->info=x;
	p->power=y;
    p->next=*start;
    *start=p;
}

void insend(struct node **start,int x,int y)
{
  struct node *p,*q;
  q=*start;
  if(q==NULL){
	insbeg(start,x,y);
  }
  else{
  while(q->next!=NULL)
  {
    q=q->next;
  }
  p=getnode();
  p->info=x;
  p->power=y;
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
        printf("%d %d \n",p->info,p->power);
        p=p->next;
    }
   
}

void insafter(struct node **q,int x,int y)
{
    struct node *r,*p,*Z;
    p=getnode();
    p->info=x;
	p->power=y;
    r=(*q)->next; 
    p->next=r;
    (*q)->next=p; 
}
void addition(struct node **start1,struct node **start2){
	struct node *start3=NULL,*p,*q;
	int temp;
	p=*start1;
	q=*start1;
	while(p!=NULL&&q!=NULL)
	{
		if(p->power==q->power)
		{
            temp=p->info-q->info;
			insbeg(&start3,temp,p->power);
			p=p->next;
			q=q->next;
		}
	}
while(p!=NULL)
{
	insbeg(&start3,p->info,p->power);
	p=p->next;
}
while(q!=NULL)
{
	insbeg(&start3,q->info,q->power);
	q=q->next;
}
traverse(&start3);
}
int main(){
	int x,y;
	struct node *start1=NULL,*start2=NULL;
	struct node *p;
	insbeg(&start1,2,1);
	insbeg(&start1,3,2);
	insbeg(&start1,4,3);
	insbeg(&start1,4,5);
	insbeg(&start1,4,6);
	insbeg(&start1,4,7);
	insbeg(&start1,4,8);
	traverse(&start1);
	printf("\n");
	insbeg(&start2,2,1);
	insbeg(&start2,3,2);
	insbeg(&start2,4,3);
	insbeg(&start2,4,5);
	insbeg(&start2,4,6);
	insbeg(&start2,4,7);
	insbeg(&start2,4,8);
	traverse(&start2);
	printf("\n");
	addition(&start1,&start2);
	return 0;
}