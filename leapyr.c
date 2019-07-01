#include<stdio.h>i
int check_leap(int);
main()
{
	int yr,leap=0;
	printf("Enter a year: ");
	scanf("%d",&yr);
	leap=check_leap(yr);
	if(leap)
		printf("Year %d is a Leap Year\n",yr);
	else
		printf("Year %d is not a leap year\n",yr);
}
int check_leap(int yr)
{
	if(yr%100==0)
	{
		if(yr%400==0) 
			return 1;
		else 
			return 0;
	}
	else if(yr%4==0)
		return 1;
	else 
		return 0;
}
