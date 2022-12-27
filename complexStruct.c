#include<stdio.h>
struct complex
{
	int real;
	int img;
};

int main(){
	struct complex s[2];
	
	int i,x=0,y=0;
	for(i=0;i<2;i++){
		scanf("%d%d",&s[i].real,&s[i].img);
	}
	for(i=0;i<2;i++){
		x=x+s[i].real;
		y=y+s[i].img;
	}
	printf("%d+%di",x,y);
return 0;
}