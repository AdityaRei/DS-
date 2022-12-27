#include<stdio.h>
int partition(int a[],int low,int high){
 int i=low;
 int j=high+1;
 int pivot=a[low];
 int t;
 do{
		do{
			i=i+1;
		}while(a[i]<pivot);
		
		do{
			j=j-1;
		}while(a[j]>pivot);
		
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
 }while (i<j);
	
	t=a[j];
	a[j]=a[low];
	a[low]=t;
	return j;
}
void quicksort(int a[],int low,int high){
	int j;
	if(low<high){
		
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int main(){
	int a[11]={20,30,40,10,55,35,80,45,15,5};
	int low=0,high=9,q,i,t;
	int mid=(high+low)/2;
     t=a[low];
	 a[low]=a[mid];
	 a[mid]=t;
	 printf("%d\n",a[low]);
	a[10]=__INT_MAX__;
	
	quicksort(a,low,high);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
