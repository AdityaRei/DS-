#include<stdio.h>
#include"stack.h" 
int power(int a,int b){
	int i,p=1;
	for(i=0;i<b;i++){
      p=p*a;
	}
	return p;
}
int Evaluate(int a,int b,char op){
	switch (op)
	{
	case '+':return a+b;
	case '-':return a-b;
	case '*':return a*b;
	case '/':return a/b;
	case'^':return power(a,b);
	}
}
int main(){
	int x,i=0,val,a,b;
    char PS[20];
	char symb;
	Initalize();
	scanf("%s",&PS);
	while(PS[i]!='\0'){
		symb=PS[i];
		if(symb>='0'&&symb<='9'){
			Push(symb-48);
		}
	else{
		b=Pop();
		a=Pop();
		val=Evaluate(a,b,symb);
		Push(val);
	}
	i++;
		}
		x=Pop();
		printf("%d",x);
	
return 0;
}