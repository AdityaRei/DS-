#include<stdio.h>
int pali(int n,int count);
int main(){
	int n,i,p,count;
	printf("Enter the digit of the no:");
	scanf("%d",&count);
	scanf("%d",&n);
	
	p=pali(n,count);

	return p;
}
int pali(int n, int count){
	int s=0,m,i,n1;
	n1=n;
	for(i=0;i<count;i++){
	   m=n%10;
	   s=s*10+m;
	   n=n/10;
	}
	if(s==n1){
		printf("Palindrome");
		return 1;
	}
	else
	{
		printf("Not a palindrome");
				return 0;
	}
}