#include<math.h>
#include<stdlib.h>
#include<stdio.h>
main()
{
	int n,i,bit;
	printf("Enter a No. upto 255: ");
	scanf("%d",&n);
	/*	for(i=7;i>=0;i--)
		{
		printf("%d",((n>>i)&1));  //Bit_Wise method
		}
		printf("\n");*/
	for(i=7;i>=0;i--)
	{
		bit=pow(2,i);
		if(bit & n)
		printf("1");
		else printf("0");
	}
	printf("\n");

}
