#include<stdio.h>
int main(int argc, char const*argv[])
{
	int n;
    int num; 
	int rem=0;
	int rev=0;

	printf("Enter any three digit number:");
    scanf("%d",&num);
    n=num;
	// main logic begins here
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=((rev*10)+rem);
    }
        printf("\n  Reverse is  %d",rev);
	
		if(num==rev)
			printf("\n Palindrome number");
		else
			printf("\n Not a Palindrome number");
    return 0;
}