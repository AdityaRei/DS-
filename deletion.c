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
    printf("Which element you want to delete:");
    scanf("%d", &loc);
    if (loc >= n + 1)
    {
        printf("Deletion is not possible");
    }
    else
    {
        for (i = loc - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        printf("The new array is:");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}