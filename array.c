#include <stdio.h>
int main()
{
   int n, a[100], i;
   printf("Enter the number of elements:");
   scanf("%d", &n);
   printf("Enter the elements:");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("The elements of array are:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }
   return 0;
}