#include<stdio.h>
int bin(int a[],int n-1,int low,int high,int key);
int main(){
	int a[100],n,low,high,mid,key,i,b;
	scanf("%d%d",&n,&key);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	b=bin(a,n-1,low,high,key);
	printf("%d",b);
	return 0;
}
int bin(int a,int (n-1),int low,int high,int key){
	if(low<=high)
	mid=(low+high)/2;
	if(a[mid]==key)
	return mid;
	else
	 if (key<a[mid])
	 return bin(a[],n-1,low,mid-1,key);
	else
	 if (key>a[mid])
	 return bin(a[],n-1,mid+1,high,key);
}