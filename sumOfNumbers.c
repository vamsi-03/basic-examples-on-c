#include<stdio.h>
int main()
{
	int num;
	int r,sum=0;
	printf("Enter the number starting with zero\n");
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		r = num%10;
		sum = sum+r;	
	}
	printf("%d",sum);
	return 0;
}
