#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
time_t strt,end;
long long int tm,i;
/*int st;
scanf("%d",&s);*/
printf("Enter 1:Start 2:end");
strt=time(NULL);
for(i=0;i<250000000;i++);
end=time(NULL);
printf("%lf \n",difftime(end,strt));
}
