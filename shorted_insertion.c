#include <stdio.h>
int main()
{
	int n, i, j, t, a[20], loc, x;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	printf("Enter the elements:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
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
