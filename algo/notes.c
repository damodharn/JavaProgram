#include<stdio.h>
main()
{
	int th=0,fh=0,hun=0,fifty=0,ten=0,five=0,two=0,one=0,cnt=0;
	int amt,no;
	printf("Enter the Amount you want to withdraw: ");
	scanf("%d",&amt);
	if(amt>=1000)
	{
		th=amt/1000;
		amt=amt%1000;
	}
	if(amt>=500)
	{
		fh=amt/500;
		amt=amt%500;
	}
	if(amt>=100)
	{
		hun=amt/100;
		amt=amt%100;
	}
	if(amt>=50)
	{
		fifty=amt/50;
		amt=amt%50;
	}
	if(amt>=10)
	{
		ten=amt/10;
		amt=amt%10;
	}
	if(amt>=5)
	{
		five=amt/5;
		amt=amt%5;
	}
	if(amt>=2)
	{
		two=amt/2;
		amt=amt%2;
	}
	if(amt) one=1;
	printf("Minimum Total no. of notes required are: %d\n\nthousend=%d\nfiveHundred=%d\nHundred=%d\nFifty=%d\nTen=%d\nFive=%d\ntwo=%d and One=%d\n",th+fh+hun+fifty+ten+five+two+one,th,fh,hun,fifty,ten,five,two,one);
}
