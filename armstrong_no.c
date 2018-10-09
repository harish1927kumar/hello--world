#include<stdio.h>
int main(int argc,char const*argv[])
{
	int n;
	int sum =0;
	int num,rem;
	printf("\n Enter any three digit number:");
	scanf("%d",&n);
	// main logic begins here
	do
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	while(n>0);
		if(num==sum)
		{
			printf("\n The entered number is Armstrong number");
		}
		else
		{
			printf("\n Not an Armstrong number");
		}
return 0;
}