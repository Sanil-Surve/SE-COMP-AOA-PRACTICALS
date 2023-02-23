#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - 1)/ 2;
		if(arr[mid] == x)
		    return mid;
	    if(arr[mid] > x)
	        return binarySearch(arr, l, mid - 1, x);
	    return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(){
	int i;
	int y;
	int x = printf("Enter number of elments: ");
	scanf("%d", &x);
	int arr[x];
	
	for(i = 0; i < x; i++)
	{
		printf("Enter Element: ");
		scanf("%d", &arr[i]);
	}
	printf("Entered array elements are: ");
	for(i=0; i<x; i++)
	{
		printf("\n%d", arr[i]);
	}
	printf("\nEnter elements to be search: ");
	scanf("%d", &y);
	int result = binarySearch(arr, 0, x-1,y);
	(result == -1)?printf("Element is not present in array") : printf("Element is present at index %d", result);
	return 0;
}
