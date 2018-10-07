#include<stdio.h>
int main(int argc,char const*argv[])
{
	int a=1;
	int b=1;
	int count=10;
	int c=a+b;

	printf("%d,",a);
	printf("%d,",b);
	printf("%d,",c);
		for(int i=0;i<count;i=i+1)
		{
			a=b;
			b=c;
			c=a+b;
			printf("%d,",c);
		}
		return 0;
}
