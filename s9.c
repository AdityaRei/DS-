#include <stdio.h>
int main()
{
	int n, a[100], b[100], i, j, k, n1;
	printf("Enter the no of element of array:");
	scanf("%d", &n);
	n1 = n;
	printf("Enter the first array:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the second array:");
	for (j = 0; j < n; j++)
	{
		scanf("%d", &b[j]);
	}
	for (j = 0; j < n; j++)
	{
		k = 0;
		for (i = 0; i < n; i++)
{

			if (b[j] == a[i])
			{
				k++;
			}
		}
		if (k == 0)
		{

			a[n1] = b[j];
			n1++;
		}
	}
	printf("The union of the sets are: ");
	for (i = 0; i < n1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
