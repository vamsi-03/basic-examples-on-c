#include <stdio.h>
int main()
{
	int i = 0;
	int n;
	printf("enter number of elements required in a array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
	    if(arr[0] < arr[i])
	    {
	    	arr[0] = arr[i];
		}
	}
	printf("%d",arr[0]);
}
