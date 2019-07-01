#include<stdio.h>
int isPrime(int);
main()
{

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
