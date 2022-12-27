#include<stdio.h>
#include"stack.h"
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
int main(){
	char a,b;
	int x;
	scanf("%c%c",&a,&b);
	x=pred(a,b);
	printf("%d",x);
return 0;
}