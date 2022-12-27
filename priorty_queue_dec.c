#include<stdio.h>
#include<stdlib.h>
int N;
void arrayinsert(int *A,int i,int x){
	int j;
	for(j=N-1;j>=i;j--)
	{
		A[j+1]=A[j];
	}
	A[i]=x;
}
void arraydelete(int *A){
	int i;
	for(i=0;i<N;i++)
	{
		A[i-1]=A[i];
	}
}
void Enqueue(int *A,int x){
	int i=0;
	while (i<N && x<A[i])
	  i++;
	arrayinsert(A,i,x);
	N++;
}
void display(int *A){
	int i;
	for (i=0;i<N;i++)
	 printf("\t%d",A[i]); 
}
int Dequeue(int *A){
	int i,x;
	x=A[N-1];
	//arraydelete(A);
	N=N-1; 
	return x;
}
int main(){
	int A[100];
	N=0;
	Enqueue(A,10);
	Enqueue(A,20);
	Enqueue(A,30);
	Enqueue(A,5);
	Enqueue(A,25);
	Enqueue(A,50);
	display(A);
	printf("\ndeeleated element is %d:",Dequeue(A));
	printf("\ndeeleated element is %d:",Dequeue(A));
	printf("\ndeeleated element is %d:",Dequeue(A));
return 0;
}