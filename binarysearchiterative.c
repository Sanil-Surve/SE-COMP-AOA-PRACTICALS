// binary search iterative program

#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	while(l <= r)
	{
		int m = l + (r - l) / 2;
		if ( arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
		    r = m - 1;
	}
	return -1;
}

int main()
{
	int i, n, y;
	printf("How many elements you want to enter: ");
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++)
	{
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	printf("\nWhich elements you want to searched: ");
	scanf("%d", &y);
	int result = binarySearch(arr, 0, n-1, y);
	(result == -1) ? printf("Element is not present in array") : printf("Element is present at ""index %d", result);
	return 0;
}
