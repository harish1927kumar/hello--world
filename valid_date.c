#include<stdio.h>
int main(int argc,char const*argv[])
{
	int dd,mm,yy
	printf("\n Enter any date in format(dd-mm-yyyy):");
	scanf("%d-%d-%d",&dd-&mm-&yy);
	printf("Entered date is ",dd-mm-yyyy);
		if(yy<=1900 & yy<=9999)
      {
        	// check month
		 if(mm>=1 && mm<=12)
		{
			//check days
			if(dd>=1 && dd<=31)&& (mm ==|| mm==3 ||mm==5  || mm==7||mm==8 || mm==10|| mm==12))
               printf("date is valid.\n");
            else if ((ddd>=1 && dd<=30)&&(mm==4 || mm==6 || mm==9 || mm==11))     
               printf("Date is valid.\n");
            else if  (dd>=1 &&dd<=28) && (mmm==2))
               printf("Date is valid.\n");  
            else if( dd==29 && mm==2 &&(yy%400 ==0||(yy%4==0 && yy%100!=0)))
               printf("Date is valid.n");
        else
        	printf("Day is invaliid.\n");
        } 
		else
		{
			printf("\n Month is not valid");
		}
	
		else
		{
			printf( "Year is not valid. You have Entered a wrong choice. Better luck next time\n");
		}
		return 0;
}