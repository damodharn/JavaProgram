#include<stdio.h>
#include<stdlib.h>
int isPrime(int);
main()
{
	int *ptr[2],j=0,k=0;
	//(int **)ptr=(int **)malloc(2*sizeof(int *));
	for(int i=2;i<1000;i++)
	if(isPrime(i))
	{
		if(i>9){
			//if(isAnagram(i,&ptr))
			{
				ptr[0]=realloc(ptr[0],sizeof(int));
				ptr[0][j]=i;
				j++;
			}
		}
		else
		{
			ptr[1]=realloc(ptr[1],sizeof(int));
			ptr[1][k]=i;
			k++;
		}
	}
}
int isPrime(int n)
{
	int i,prime=0;
	for(i=2;i<=n/2;i++)
	{
		if(n/i==0) { prime=1; break;}
		if(prime==0) return 1;
		else return 0;
	}
}
/*int isAnagran(int n,int *ptr)
{
	for(int i=0; ;i++)
	{
		if(ptr[0][i]== )
	}
}*/
