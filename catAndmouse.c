#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int catAndmouse(int x, int y,int z);
int main(){
	int i,q,x,y,z,c;
	scanf("%d",&q);
   for(i=0;i<q;i++){
	 scanf("%d%d%d",&x,&y,&z);
       c=catAndmouse(x,y,z);
	   printf("%c",c);
   }
return 0;
}
int catAndmouse(int x, int y,int z){
    int a,b;
	a=(z-x);
	a=abs(a);
	b=(z-y);
	b=abs(b);
	if(a<b)
	{
		printf("Cat A\n");
	}
	else if(b<a){
		printf("Cat B\n");
	}
	else{
		printf("Mouse C\n");
	}
}