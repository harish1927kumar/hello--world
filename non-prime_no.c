#include <stdio.h>
int main()
{
int num;
printf("\n Enter any number to check if it is no-prime or composite number:");
scanf("%d",&num);
while (num<=100) /*Limit*/
{
if(num%2==0)  /*Condition for composite or non prime numbers*/
{
	
	printf("\n  It is  not an non -prime number or composite number");
	break;
}
else(num!=2); /* as 2 is prime so it is excluded*/

{printf("\n It is an non-prime number or composite number");;/* print that non prime numbers*/
num++;
break; /*increment for checking next number*/
}
}
return 0;
}
