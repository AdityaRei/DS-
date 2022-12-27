#include<stdio.h>
int main(){
	int i,j,n,m,t,a[5][5];
	printf("Enter the number of row and column:");
	scanf("%d%d",&n,&m);
	printf("Enter the matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i>j)
			{
				t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
			}
			
		}
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	}