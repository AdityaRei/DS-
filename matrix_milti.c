#include<stdio.h>
int main(){
	int i,j,k,r1,r2,c1,c2,a[5][5],b[5][5],c[5][5],sum=0;
    printf("Enter the rows and column of matrix 1:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the of rows and column matrix2: ");
	scanf("%d%d",&r2,&c2);
	printf("Enter the matrix 1:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the matrix 2:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++){
		
		for(j=0;j<c2;j++){
        sum=0;
			for(k=0;k<r2;k++){
			sum=sum+(a[i][k]*b[k][j]);
			}
			 c[i][j]=sum;
		}
	}
	printf("The multiplication of maxrices:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
return 0;
}