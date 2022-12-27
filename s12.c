#include<stdio.h>
int main(){
	int n,a[100],b[100],c[100],i,j,k,n1,m=0;
	printf("Enter the element of array\n");
	scanf("%d",&n);
	n1=n;
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
				c[m]=b[j];
                m++;
                k++;
		    }
		}
		if(k==0){
		    
				a[n1]=b[j];
			    n1++;
			}	
			 
	}
        for(j=0;j<n1;j++){
		 
			if(a[j]!=c[j]){
				printf("%d ",c[j]);
			}
		 }
	
	return 0;
}

	