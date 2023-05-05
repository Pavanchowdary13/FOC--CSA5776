#include<stdio.h>
struct account
{
	int account_number;
	float deposit_amount;
	float withdraw_amount;
	float balance;
	
}s1;
main()
{
	printf("enter account_number:\n");
	scanf("%d",&s1.account_number);
	printf("enter deposit_amount:\n");
	scanf("%f",&s1.deposit_amount);
	printf("enter withdraw_amount:\n");
	scanf("%f",&s1.withdraw_amount);
	printf("enter balance:\n");
	scanf("%f",&s1.balance);
}
