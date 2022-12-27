#include<stdio.h>
void mergearray(int A[],int B[],int M,int N){
	int i=0,j=0,k=0,C[M+N];
	while(i<M&&j<N){
		if(A[i]<B[j]){
			C[k]=A[i];
			i++;
			k++;
		}
		else{
			C[k]=B[j];
			j++;
			k++;	
		}
	}
	while(i<M){
		C[k]=A[i];
		i++;
		k++;
	}
	while(j<N){
		C[k]=B[j];
		j++;
		k++;
		
	}
	for(i=0;i<M+N;i++){
		printf("%d ",C[i]);
	}
}

int main(){
    int A[10]={1,2,3,4,5,6,7,10,12,13};
	int B[12]={14,15,17,22,18,19,20,22,45,70,55,66};
	int M=10,N=12;
	mergearray(A,B,M,N);
	return 0;
}