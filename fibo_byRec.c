#include<stdio.h>
int fibo(int n);
int main(){
	int i,n,DAT[n],f;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		DAT[i]=0;
	}
		f=fibo(n);
		for(i=1;i<n;i++){
			printf("%d",DAT[i]);
		}
	
return 0;
}
int fibo(int n){
	int DAT[100];
	if(n==1)
	 DAT[n]=0;
	if(n==2)
	 DAT[n]=1;
	else if(n<=3){
		if(DAT[n]==0){
	       DAT[n]=fibo(n-1)+fibo(n-2);
		}
	}
return DAT[n];
}