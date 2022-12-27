#include<stdio.h>
#include<stdlib.h>
#include"myLinkedlist.h"


void merge(struct node **start1,struct node **start2){
	struct node *p,*q;
	struct node *temp=NULL;
    p=*start1;
	q=*start2;
	while(p!=NULL && q!=NULL){
		if(p->info<q->info){
          insend(&temp,p->info);
		  p=p->next;
		}
		else{
			insend(&temp,q->info);
		  q=q->next;
		}
	}
	while(p!=NULL){
		  insend(&temp,p->info);
		  p=p->next;
	}
		while(q!=NULL){
		  insend(&temp,q->info);
		  q=q->next;
	}
    traverse(&temp);
}

void Union(struct node **start1,struct node **start2)
{
	struct node *p,*q;
	struct node *temp=NULL;
    p=*start1;
	q=*start2;
	while(p!=NULL && q!=NULL){
		if(p->info<q->info){
          insend(&temp,p->info);
		  p=p->next;
		}
		else if(p->info==q->info){
			insend(&temp,p->info);
			p=p->next;
			q=q->next;
		}
		else{
			insend(&temp,q->info);
		  q=q->next;
		}
	}
	while(p!=NULL){
		  insend(&temp,p->info);
		  p=p->next;
	}
		while(q!=NULL){
		  insend(&temp,q->info);
		  q=q->next;
	}
    traverse(&temp);
}
void Intersection(struct node **start1,struct node **start2){
	struct node *p,*q;
	struct node *temp=NULL;
    p=*start1;
	q=*start2;
	while(p!=NULL && q!=NULL){
		if(p->info<q->info){
		  p=p->next;
		}
		else if(p->info==q->info){
			insend(&temp,p->info);
			p=p->next;
			q=q->next;
		}
		else{
		  q=q->next;
		}
	}
    traverse(&temp);
}
void Difference(struct node **start1,struct node **start2){
	struct node *p,*q;
	struct node *temp=NULL;
    p=*start1;
	q=*start2;
	while(p!=NULL && q!=NULL){
		if(p->info<q->info){
          insend(&temp,p->info);
		  p=p->next;
		}
		else if(p->info==q->info){
			p=p->next;
			q=q->next;
		}
		else{
		  q=q->next;
		}
	}
	while(p!=NULL){
		  insend(&temp,p->info);
		  p=p->next;
	}
    traverse(&temp);
}
void Symmetric_difference(struct node **start1,struct node **start2){
	struct node *p,*q;
	struct node *temp=NULL;
    p=*start1;
	q=*start2;
	while(p!=NULL && q!=NULL){
		if(p->info<q->info){
          insend(&temp,p->info);
		  p=p->next;
		}
		else if(p->info==q->info){
			p=p->next;
			q=q->next;
		}
		else{
			insend(&temp,q->info);
		  q=q->next;
		}
	}
	while(p!=NULL){
		  insend(&temp,p->info);
		  p=p->next;
	}
		while(q!=NULL){
		  insend(&temp,q->info);
		  q=q->next;
	}
    traverse(&temp);
}
int main(){
	struct node *start1= NULL;
	struct node *start2=NULL;
	struct node *start3;
  struct node *p,*q;
 insend(&start1,1);
 insend(&start1,2);
 insend(&start1,3);
 insend(&start1,4);
 insend(&start1,5);
 insend(&start1,6);
 insend(&start1,10);
 traverse(&start1);
  printf("\n");
 insend(&start2,2);
 insend(&start2,10);
 insend(&start2,20);
 insend(&start2,30);
 insend(&start2,40);
 insend(&start2,50);
 insend(&start2,60);
 traverse(&start2);
 printf("\nMerged Linked List:\n");
 merge(&start1,&start2);
 printf("\nUnion:\n");
 Union(&start1,&start2);
printf("\nIntersection:\n");
Intersection(&start1,&start2);
printf("\nDifference:\n");
Difference(&start1,&start2);
printf("\nSymmetric Difference:\n");
Symmetric_difference(&start1,&start2);           
return 0;
}