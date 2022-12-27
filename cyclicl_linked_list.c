#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node{
	int info;
	struct node *next;
};
struct node  *START;
struct node *GetNode(){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}
void InsertBeg(int x){
	struct node *p;
	p=GetNode();
	p->info=x;
	p->next=START;
	START=p;
}
void InsEnd(int x){
	struct node *q,*p;
	q=START;
	if(q==NULL){
		InsertBeg(x);
	}
	else{
		while (q->next!=NULL)
		{
		q=q->next;
		}
		p=GetNode();
		p->info=x;
		p->next=NULL;
		q->next=p;
	}
}
void Traverse(){
	struct node *p;
	p=START;
	while(p!=NULL){
		printf("%d\t",p->info);
		p=p->next;
	}	
}
int cycle_detection(){
		struct node *t,*r;
         r=START;
		 t=START;
		 while(r!=NULL&&r->next!=NULL){
			t=t->next;
			r=r->next;
			r=r->next;
			if(t==r){
				return TRUE;
			}
		 }
		 return FALSE;
		 
	}
int cycle_len(){
	int c=1;
	struct node *t,*r;
         r=START;
		 t=START;
		 while(r!=NULL&&r->next!=NULL){
			t=t->next;
			r=r->next;
			r=r->next;
		if(t==r){
				break;
			}
		 }
		 r=r->next;
		 while(t!=r){
		 r=r->next;
			c++;
		 }
		 return c;
}
int starting_point(){
	struct node *t,*r;
         r=START;
		 t=START;
		 while(r!=NULL&&r->next!=NULL){
			t=t->next;
			r=r->next;
			r=r->next;
		if(t==r){
				break;
			}
		 }
		 t=START;
		  while(t!=r){
			t=t->next;
		 r=r->next;
		 }
		 return t->info;
}
int  middle_point(){
	struct node *t,*r;
         r=START;
		 t=START;
		 while(r!=NULL&&r->next!=NULL){
			t=t->next;
			r=r->next;
			r=r->next;
}
return t->info;
}
int main(){
	int x,y,z,a;
	START=NULL;
	struct node *p,*q;
	InsertBeg(100);
	InsertBeg(200);
	InsertBeg(300);
	InsertBeg(400);
	InsertBeg(500);
	InsEnd(10);
	InsEnd(20);
	InsEnd(30);
	InsEnd(40);
	Traverse();
	p=START;
	q=START;
  while(p->next!=NULL){
	p=p->next;
  }
  while(q->info!=300){
	q=q->next;
  }
  printf("\n%d %d",q->info,p->info);
 p->next=q;
Traverse();
// x=cycle_detection();
// y=cycle_len();
// z=starting_point();
a=middle_point();
// printf("\n%d %d %d ",x,y,z);
printf("\n%d",a);
return 0;
}