#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int bit,i,n;
	for(i=0;i<20;i++)
	{
		bit=pow(2,i);
		printf("2^%d= %d\n",i,bit);
	}
}
