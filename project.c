#include<stdio.h>
#include<math.h>
int main()
{
	int Boxes,AmountSold,IncomeAfterCommission,total;
	int p,money;
	printf("Enter number of boxes:");
	scanf("%d",&Boxes);
	printf("Enter Amountsold:");
	scanf("%d",&AmountSold);
	money = Boxes*AmountSold;
	//printf("The amount for one box is :%d\n",AmountSold);
	//printf("the amount before commission:%d\n",money);
	p = Boxes*(AmountSold*0.1+23);
	printf("The commission for  Boxes is:%d\n",p);
	IncomeAfterCommission = money-p;
	printf("The money geting by farmer after commission is:%d\n",IncomeAfterCommission);
	printf("\tThank you\n your transaction completed:");
	
	return 0;

	
}
