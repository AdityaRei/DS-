#include<stdio.h>
int main(){
	int n,a[100],b[100],c[100],i,j,k,n1;
	printf("Enter the no of element of array:");
	scanf("%d",&n);
	n1=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(j=0;j<n;j++){
		k=0;
		for(i=0;i<n;i++){
		
	        if(b[j]==a[i]){
                k++;
				c[n1]=b[j];
                n1++;
		    }
		}
		
			 
	}
	printf("The intersection of two sets is: ");
        for(i=0;i<n1;i++)
		{
		 printf("%d ",c[i]);
	}
	return 0;
}

	