#include<stdio.h>
struct student
{
  int rollno;
  int section;
  float percentage;
  int mobno; 
};
int main(){
  struct student S[5];
  int i;
  for(i=0;i<5;i++){
  scanf("%d",&S[i].rollno);
  scanf("%d",&S[i].section);
  scanf("%f",&S[i].percentage);
  scanf("%d",&S[i].mobno);
  }
  for(i=0;i<5;i++){
  printf("%d\t",S[i].rollno);
  printf("%d\t",S[i].section);
  printf("%.1f%%\t",S[i].percentage);
  printf("%d\t",S[i].mobno);
  printf("\n");
  }
return 0;
}