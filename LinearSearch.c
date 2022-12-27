#include<stdio.h>
int main(){
	int i,j,n,a[50],f;
	printf("Enter the number of element:");
	scanf("%d",&n);
	printf("Enter the element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Which element you want to find:");
	scanf("%d",&f);
	for(i=0;i<n;i++){
		if(a[i]==f){
			printf("The element is on position %d.",i+1);
		}
		
	}
	return 0;
}