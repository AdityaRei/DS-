#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
#define TRUE 1
#define FALSE 0
#define True 1
#define False 0
int pred(char a,char b)
{
	if (a=='^'||a=='*'||a=='/'||a=='%'){
       if (b=='^'){
		return False;
	   }
	   else{
		return True;
	   }
}
else{
  if( b=='+'||b=='-'){
	return True;
  }
  else return False;
}
}
struct Stack
{
	char item[STACKSIZE];
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
void Push(char x){
if(S.Top==STACKSIZE-1){
	printf("\nStack overflow");
	exit(1);
}
S.Top=S.Top+1;
S.item[S.Top]=x;
}
char Pop()
{
	char x;
	if(IsEmpty(S)){
		printf("\nStack Underflow");
		exit(1);
	}
	x=S.item[S.Top];
	S.Top=S.Top-1;
	return x;
}
char StackTop()
{
	char x;
   x=S.item[S.Top];
   return x;
}
void infixTo(char str[])
{
	char str2[20];
	int p=0,i=0;
 Initalize();

while(str[i]!='\0')
{
	char symbol=str[i];
  if(symbol>='a'&&symbol<='z')
  {
	str2[p]=symbol;
	p++;

  }
  else{
	while(!IsEmpty()&&pred(StackTop(),symbol))
	{
		char x=Pop();
		str2[p]=x;
		p++;
	}
		Push(symbol);
  }
  i++;
}
while(!IsEmpty())
{
	char x=Pop();
	str2[p]=x;
	p++;
}
	puts(str2);
}
int main(){
	char str[20];
 gets(str);
 infixTo(str);
return 0;
}