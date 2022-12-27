#include <stdio.h>
int main()
{
	int n;
	printf("Enter size:");
	scanf("%d", &n);
	printf("Enter elements of array:");
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	const int N = 1000;
	int idx[N];
	for (int i = 0; i < N; i++)
	{
		idx[i] = -1;
	}
	for (int i = 0; i < n; i++)
	{
		if (idx[arr[i]] != -1)
		{
			idx[arr[i]]++;
		}
		else
		{
			idx[arr[i]] = 1;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (idx[i] == 1)
		{
			printf("Non Repeated element : %d ", i);
			printf("\n");
		}
		else if (idx[i] > 1)
		{
			printf("Repeated element : %d ", i);
			printf("\n");
		}
	}
	return (0);
}