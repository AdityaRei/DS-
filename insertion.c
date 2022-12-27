#include <stdio.h>
int main()
{
   int a[10], i, n, loc, x;
   printf("No of elements in the arrray:");
   scanf("%d", &n);
   printf("Enter the elements:");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("Where you want to insert and what:");
   scanf("%d%d", &loc, &x);
   for (i = n - 1; i >= loc - 1; i--)
   {
      a[i + 1] = a[i];
   }
   a[loc - 1] = x;
   printf("The new array is:");
   for (i = 0; i <= n; i++)
   {
      printf("%d ", a[i]);
   }
   return 0;
}