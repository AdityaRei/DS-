#include<stdio.h>
int division(int key,int n);
int nearestPrime(int n);
int main(){
	int n,i,a[100],key,d;
	printf("Enter table size:");
	scanf("%d",&n);
	printf("Enter the key:");
	scanf("%d",&key);
    d=division(key,n);
	printf("%d",d);
	return 0;

}
int nearestPrime(int n){
	int i,j,c=1;
	for(i=n-1;i>0;i--){
	    c=1;
		for(j=2;j<i;j++){
			if(i%j==0){
              c=0;
              break;
        
			}
		}
		if(c==1)
        {
			return i;
		}
        
	}
}
int division(int key,int n){
  int np,l;
  np=nearestPrime(n);
  l=key%np;
  return l;
}