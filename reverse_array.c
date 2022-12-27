#include <stdio.h>
int main()
{
	int n;
	printf("Enter size:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = n - 1;
	for (int i = 0; i < j; i++)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
	}
	printf("Reverse array:");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}