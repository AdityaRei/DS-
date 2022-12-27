#include<stdio.h>
int main(){
	int x,n,i,j=0,c=0,k;
   scanf("%d",&x);
for(k=0;k<x;k++){
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		c=0;
		j=0;
		while(j<=i){
			if(j*i==n){
				float q=i;
				float r=j;
			//	printf("%d,%d\n",i,j);
				if((r/q)>=0.5){
					c=1;
				}
			}
			j++;
		}
		if(c==1){
			printf("1\n");
			break;
		}
	}
	if(c==0){
		printf("0\n");
	}
}
return 0;
}