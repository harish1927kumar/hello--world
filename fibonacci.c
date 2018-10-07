#include<stdio.h>
int main(int argc,char const*argv[])
{
	int a=1;
	int b=1;
	int count=2,c,num;
	printf("\n Enter the value of num:",num);
	scanf("%d",&num);
	printf("The fibonacci series is\n");
	printf("%d ,%d,",a,b);
	c=a+b;
	while(count<=num)
	{
printf("%d ,",c);
a=b;
b=c;
count++;
}
return 0;
}
