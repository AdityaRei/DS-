#include<stdio.h>
int main(){
	int i,j,r,c,a[5][5],b[5][5],d[5][5];
	printf("Enter the no of row and column:");
	scanf("%d%d",&r,&c);
	printf("Enter the first matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe adition of two matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
        d[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}	
  return 0;
}