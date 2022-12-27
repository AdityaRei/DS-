#include<stdio.h>
int num(int n int r);
int main(){
	int n,f=0,r;
	scanf("%d",&n);
	scanf("%d",&r);
	f=num(n,r);
	printf("%d",f);

	return 0;
}
int num(int n,int r){
	int i,s=1;
	for (i=1;i<=n;i++){
		s=n*n;
	}
	return s;
}