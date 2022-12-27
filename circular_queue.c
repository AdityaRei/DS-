#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
#define TRUE 1
#define FALSE 0
struct Queue{
	int rear;
	int front;
	int item[maxsize];
};
void Initalize(struct Queue *Q){
	Q->rear=-1;
	Q->front=0;
}
int Isempty(struct Queue Q){
 if(Q.rear-Q.front+1==0){
	return TRUE;
 }
 else{
	return FALSE;
 }
}
void Enqueue(struct Queue *Q,int x){
	if (Q->rear==9){
		printf("Queue Overflow");
		exit(1);
	}
	Q->rear++;
	Q->item[Q->rear]=x;
}
int Dequeue(struct Queue *Q){
	if(Isempty(*Q)){
		printf("Queue Underflow");
		exit(1);
	}
	int x=Q->item[Q->front];
	Q->front=Q->front+1;
	return x;
}

int main(){
	struct Queue myQ;
	int x;
	Initalize(&myQ);
	Enqueue(&myQ,10);
	Enqueue(&myQ,20);
	Enqueue(&myQ,30);
	x=Dequeue(&myQ);
	printf("%d\n",x);
	x=Dequeue(&myQ);
	printf("%d\n",x);
	x=Dequeue(&myQ);
	printf("%d\n",x);
	x=Dequeue(&myQ);
	printf("%d\n",x);
return 0;
}