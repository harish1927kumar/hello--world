#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char const *argv[])
{
	char host *host name;
	struct host *host info;
	File*fp;
	host name="google.com";
	host info =gethostbyname(hostname);
	// variable to store date and time components
	int hours,minutes,seconds,days,months,years;
	//time_t is an arthimetic time type
	time_t now;
	//time() returns the current date and time of the system as time_t value
	time (&now);
	//convert to local time format and print to stdout
	printf("\n Today is :%d",ctime(&now)) ;
	// local time converts  a time_t value to calender time
	//returns a pointer to a tm srtucture with its members
	//filled with the corresponding values.
	struct tm*local =local time(&now);
	hours =local->tm_hour;// get hours since midnight(0-23)
	minutes =local->tm_min;// get minutes passed after  the hour(0-59)
	seconds=local->tm_sec;//get seconds passed after minutes(0-59)
	days = local->tm_mday;//get day of month(1to 31)
	month=local->tm_mon+1;//get month of year(0+11)
	year=local->tm_year+1900;
	if (hostInfo==NULL)
	{
		// do nothing
	}
    else
    {
    fopen("log.txt","w");
    fprintf("Connection time:%02d/%02d/%d \n",days,months,year););
    fclose(fp);
    }
    return 0;
    }
}