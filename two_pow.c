#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(int c, char **v)
{
	int no,i;
	float sum;
A: printf("Enter a No.(0 to 31) :");
   scanf("%d",&no);
   if( no<0 ||no>31) 
   {
	   printf("Invalid i/p..");
	   goto A;
   }
   for(i=0;i<=no;i++)
   {
	   sum=powf(2.0,(float));
	   printf("2^%.2d = %.2f\n",i,sum);
   }
}
