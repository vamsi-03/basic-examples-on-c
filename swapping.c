#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	printf("Before swapping:\n x=%d  y=%d",x,y);
	x = x-y;
	y = x+y;
	x = y-x;
	printf("\nAfter swapping:\n x=%d  y=%d",x,y);
}
