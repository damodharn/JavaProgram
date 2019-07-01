#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int bet();
main()
{
	srand(time(0));
	int stake=10,goal=20,cnt=0,res,win=0;
	float per=0;
	while(stake && (stake!=goal))
	{
		cnt++;
		res=bet();
		if(res) { stake+=1; win++;}
		else
		{
			stake-=1;
		}
	}
	printf("Stake=%d\n",stake);
	per=((float)win/(float)cnt)*100;
	printf("\tyou've played total %d bets and you won %d bets\n\t ur winning percentage is %f %% \n\t ur loosing percantage is %f %%\n",cnt,win,per,100-per);
}
int bet()
{
return rand() %2;
}
