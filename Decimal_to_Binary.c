#include<stdio.h>
#include"stack.h"
int main(){
	int i,x,b,a;
	scanf("%d",&x);
Initalize();
while(x!=0){
	b=x%2;
	Push(b);
	x=x/2;

}
while(!IsEmpty()){
	a=Pop();
	printf("%d",a);    
}
return 0;
}
