#include<stdio.h>
#include<conio.h>
void insertsort(int arr[],int size);
int main()
{
	int arr[50],n,i;
	printf("How many element you want to store?\n");
	scanf("%d",&n);
	printf("Enter %d array elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	    insertsort(arr,n);
	    printf("\nSorted Element using insertion sort::");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	}
	void insertsort(int arr[],int n){
		int i,j,temp;
		for(i=1;i<n;i++){
			temp=arr[i];
			j=i-1;
			while(j>=0 && arr[j]> temp){
				arr[j+1]=arr[j];j--;
			}
			arr[j+1]= temp;
		}
}
