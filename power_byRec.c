#include<stdio.h>
int power(int n,int i);
int main(){
	int n,p,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("What power you want:");
	scanf("%d",&i);
    p=power(n,i);
	printf("%d",p);
	return 0;
}
int power(int n,int i){
	if (i==0)
	return 1;
	else 
	return n*power(n,i-1);
}