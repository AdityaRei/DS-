#include<stdio.h>
#include<stdlib.h>
#include"charStack.h"
int main(){
	int i[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'},x,b;
	char a;
	scanf("%d",&x);
Initalize();
while(x!=0){
	b=x%16;
	Push(i[b]);
	x=x/16;

}
while(!IsEmpty()){
	a=Pop();
	printf("%c",a);    
}
return 0;
}
