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
void insbeg(struct node **cstart,int x)
{
	struct node *p;
	p=getnode();
	if((*cstart)==NULL){
		(*cstart)=p;
		(*cstart)->next=p;
		p->info=x;
	}
	else{
	p->info=x;
	p->next=(*cstart)->next;
	(*cstart)->next=p;
}
}
void insend(struct node **cstart,int x)
{
	struct node *p;
	p=getnode();
	p->info=x;
	p->next=(*cstart)->next;
	(*cstart)->next=p;;
	(*cstart)=p;
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
void traverse(struct node **cstart)
{
	struct node *p;
	p=(*cstart)->next;
 while(p!=(*cstart)){
	printf("%d\t",p->info);
	p=p->next;
 }
 printf("%d",p->info);
}
int delbeg(struct node **cstart){
	int x;
	struct node *p;
	p=(*cstart)->next;
	(*cstart)->next =p->next;
	x=p->info;
	// free(p);
	return x;
}
int delend(struct node **cstart)
{
int x;
struct node *p,*q;
while (p->next!=(*cstart)){
	p=p->next;
}
p->next=(*cstart)->next;
q=*cstart;
*cstart=p;
x=q->info;
// free(q);
return x;
}
int main()
{
struct node *cstart;
cstart=NULL;
int x,y;
insbeg(&cstart,50);
insbeg(&cstart,40);
insbeg(&cstart,30);
insbeg(&cstart,20);
insbeg(&cstart,10);
insend(&cstart,60);
traverse(&cstart);
return 0;
}
