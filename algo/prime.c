#include<stdio.h>
int main()
{
	int no,i,prime=0,cnt=0;
	for(no=2;no<=1000;no++,prime=0)
	{
		for(i=2;i<=no/2;i++)
		{
			if((no%i)==0) 
			{prime++; break;}

		}

		if(prime==0)
		{	cnt++;
			if((cnt-1)%10==0) printf("\n");
			printf(" %4d",no);
		}

	}
	printf("\n");
}

