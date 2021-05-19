#include<stdio.h>
int main()
{
	int num,temp,sum,r;
	printf("enter an integer:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		r = num%10;
		sum = (sum*10)+r;
		num=num/10;             /* in first iteration:         in second iteration:      in third iteration:      after that the while loop will fail
		                               num = 101,                  num = 10                  num = 1
		                               r = 101%10 = 1              r = 10%10 = 0             r = 1%10 = 1
		                               sum = (0*10)+1 = 1          sum = (1*10)+0 = 10       sum = (10*10)+1 = 101
		                               num = 101/10 = 10           num = 10/10 = 1           num = 1/10 = 0    */	                               
	}
	if(temp==sum)
    {
    	printf("palindrome");
	}
	else
	{
	    printf("not palindrome");
	}
	return 0;	
}
