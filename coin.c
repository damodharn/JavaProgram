#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flip();
main(int c, char **v)
{
	srand(time(0));
	float head=0; int i,coin,n,cnt;
	float per;
	cnt=atoi(v[1]);
	//printf("Enter no. of times you want to flip a coin:");
	//scanf("%d",&cnt);
	for(i=1;i<=cnt;i++)
	{
		coin=flip();
		if(coin){
			printf("Heads\n");
			head=head+1;}
		else
		{
			printf("Tails\n");
			//tail=tail+1;
		}
	}

	per=(head/cnt)*100;
	printf("\nNo of Heads=%f\nNo of tails=%f\nPerecntage of giving Head: %f\nPercentage of giving Tail: %f\n",head,cnt-head,per,100-per);
}
int flip()
{
	return rand() %2;
}

