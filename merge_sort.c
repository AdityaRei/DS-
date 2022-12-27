#include<stdio.h>
int mergeSort(int a[],int low,int high);
int merge(int a[],int low,int mid,int high);
int main(){
	int n,a[n],i,j,low,high,m;
	printf("Enter the number elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	low=0;
		high=n-1;
        mergeSort(a,low,high);
		for(i=0;i<=high;i++){
			printf("%d ",a[i]);
		}
	return 0;
}
int mergeSort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	return 0;
}
int merge(int a[],int low,int mid,int high){
	int k,j,i,c[100]={0};
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high){
		if(a[i]<a[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=high){
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++){
		a[i]=c[i];
	}
	for(i=0;i<=high;i++){
		printf("%d",a[i]);
	}
  return 0;
}