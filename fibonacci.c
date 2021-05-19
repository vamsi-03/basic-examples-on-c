#include <stdio.h>
int main()
{
	int i,n,t1,t2,nextTerm;
	printf("enter the first and second term in the fibonacci series:");
	scanf("%d,%d",&t1,&t2);
	printf("Enter number of elements to be printed in the fibonacci series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
        printf("%d ",t1);
        nextTerm = t1+t2;
		t1 = t2;
		t2 = nextTerm; 
	}
	return 0;	
}
