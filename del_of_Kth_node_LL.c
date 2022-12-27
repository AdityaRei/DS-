#include<stdio.h>
#include"myLinkedlist.h"
// void delKth(struct node **start,int k)
// {
// 		struct node *p,*q;
// 		p=*start;
//         q=*start;
// 	while(k!=1)
// {
// 	p=p->next;
// 	k--;
// }
// while (p!=NULL)
// {
// 	p=p->next;
// 	q=q->next;
// }
// delaft(&q);
// }
int main()
{
	struct node *start,*p,*q;
// p=start;
// q=start;
// int k;
// scanf("%d",k);
insbeg(&start,60);
insbeg(&start,50);
insbeg(&start,40);
insbeg(&start,30);
insbeg(&start,20);
insbeg(&start,10);
traverse(&start);
// delKth(&start,k);

return 0;
}