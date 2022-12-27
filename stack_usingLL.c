#include<stdio.h>
#include"myLinkedlist.h"
#define True 1
#define False 0
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
int main()
{
	struct node *start;
	start=NULL;
	printf("%d\n",Isempty(&start));
	push(&start,10);
	push(&start,20);
	push(&start,30);
	push(&start,40);
	push(&start,50);
	pop(&start);
	traverse(&start);
	printf("\n%d",StackTop(&start));

return 0;
}