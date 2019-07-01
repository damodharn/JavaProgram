#include<stdio.h>
float harmonic(int);
main()
{
	int n; float sum;
A: printf("Enter a no. (Except 0): ");
   scanf("%d",&n);
   if(n==0) {printf("Invalid i/p..'0' not allowed\n"); goto A;}
   sum=harmonic(n);
   printf("Harmonic no. of a given no.%d=%f\n",n,sum);
}
float harmonic(int no)
{
	int i; float sum=0;
	if(no>0)
	{
		for(i=1;i<=no;i++)
		{
			sum=sum+(float)1/i;
		}
	}
	else
	{
		for(i=-1;i>=no;i--)
		{
			sum=sum+(float)1/i;
		}
	}
	return sum;
}
