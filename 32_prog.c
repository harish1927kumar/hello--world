#include<stdio.h>
int main (int argc,char const*argv[])
{
	float height[5];
	for(int i=0;i<5;++i)
	{
		printf("\n Enter the value of height[%d]",i);
		scanf("%f",&height[i]);
	}
	float min_height=-1;
	int min_height_index=-1;//-1 indiactes that index is at present one step before starting index number of the array
    for (int i=0;i<5;++i)
     {
     if(((min_height)>height[i])||(min_height=-1))
     {
     	min_height=height[i];
        min_height_index=i;	
     }
     }  
     printf(" min_height=%f\n",min_height);
     printf(" min_height_index=%d\n",min_height_index);
     return 0;
 }

