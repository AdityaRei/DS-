#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int mx = -1;
	for (int i = 0; i < n; i++)
	{
		if (mx < arr[i])
		{
			mx = arr[i];
		}
		else
		{
			continue;
		}
	}
	int ans[mx + 1];
	for (int i = 0; i < n; i++)
	{
		ans[arr[i]] = 1;
	}
	printf("Missing elements are:");
	for (int i = 0; i < n; i++)
	{
		if (ans[i] != 1)
		{
			printf("%d ", i);
		}
		else
		{
			continue;
		}
	}
	return 0;
}
