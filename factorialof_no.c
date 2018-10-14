#include<stdio.h>
int main(int argc,char const*argv[])
{
	int i,n;
	int fact=1;
	printf("Enter any number whose factorial you want:");
	scanf("%d ",&n);
	// main logic begins here
	for(i=1;i<n;i++)
	{
		fact=(fact *i);
	}
	printf(" %d \n Factoial of the given number is",fact);
	return 0;
}