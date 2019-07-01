#include<stdio.h>
static int flag=0;
void PrimeFactors(int);
int isPrime(int);
main()
{
	int no;
	printf("Enter a no to find prime factors: ");
	scanf("%d",&no);
	/*while(no%2==0)
	  {
	  no=no/2;
	  }*/
	printf("Prime Factors are: ");
	if(no%2==0) {flag=1; printf("%d ",2);}
	PrimeFactors(no);
	printf("\n");
}
void PrimeFactors(int n)
{
	int i,j,prime=0;
	for(i=3;i<=n/2;i=i+2)
	{
		if(isPrime(i)){
			if(n%i==0)
			{
				flag=1;
				printf("%d ",i);
			}
		}
		if(flag==0) {
			printf("No. u've entered is itself a prime No.\nso it dosen't have prime factors\n");
			return;
		}
	}
}
	int isPrime(int n)
	{
		int i,prime=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0){ prime++; break;}
		}
		if(prime==0) 
			return 1;
		else 
			return 0;
	}
