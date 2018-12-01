#include<stdio.h>
#include<math.h>// for sqrt()
float roots(float,float,float,float,float );
int main(int argc,char const*argv[])
{
float a,b,c;
float D;
float x1,x2;
printf("\n %f%f%f Enter the coefficients of a,b and c ",a,b,c);
scanf("%f%f%f",&a,&b,&c);
D=((b*b)-(4*a*c));
return 0;	
}
 float roots(float D,float x1,float x2,float a,float b)
 {
	if(D>0)
    {
    printf("\n Roots are real and unequal");
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    printf("\n x1=and x2=",x1,x2);
    }
    else if(D==0)
    {
    	x1=x2=-b/(2*a);
     printf("\n x1=and x2=",x1);
    }
    else
    {
    	printf("\n Roots are imaginary");
    }
}