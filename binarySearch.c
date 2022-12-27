#include<stdio.h>
int binary(int l,int h,int a[],int ref);
int main(){
	int i,j,n,h,l,a[100],mid,ref,c;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("Which element you want to find:");
	scanf("%d",&ref);
	l=0;
	h=n-1;
	
	c= binary(l,h,a,ref);
	printf("Your number is at position %d",c+1);
	return 0;
	
}
int binary(int l,int h,int a[],int ref){
	while(l<=h){
	int	mid=(l+h)/2;
		if(a[mid]==ref){
			return mid;
		}
		else if(ref<a[mid]){
			h=mid-1;
		}
		else{
			 l=mid+1;
		}
	}
}