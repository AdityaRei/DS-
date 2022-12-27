#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack
{
	int item[STACKSIZE];
	int Top;
};

struct Stack S;

void Initalize(){
 S.Top=-1;
}

int IsEmpty(){
	if(S.Top==-1)
	return TRUE;
	else
	return FALSE;
}
void Push(int x){
if(S.Top==STACKSIZE-1){
	printf("\nStack overflow");
	exit(1);
}
S.Top=S.Top+1;
S.item[S.Top]=x;
}
int Pop(){
	int x;
	if(IsEmpty(S)){
		printf("\nStack Underflow");
		exit(1);
	}
	x=S.item[S.Top];
	S.Top=S.Top-1;
	return x;
}
int StackTop(){
	int x;
   x=S.item[S.Top];
   return x;
}
int main(){
int x;
Initalize();
Push(100);
x=Pop();
printf("%d",x);	
return 0;
}

