#include<stdio.h>
int bubble(int a[],int n);
int main(){
	int i,j,n,a[50];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	bubble(a,n);
	
	return 0;
}
int bubble(int a[],int n){
	int i,j;
	int t=0;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
                a[j+1]=t;
			}
			else
				continue;
		}
	}
	for(j=0;j<n;j++){
	printf("%d ", a[j]);
	}

}