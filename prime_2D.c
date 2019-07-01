#include<stdio.h>
int isPrime(int);
main()
{
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
	int arr[10][49]={0};
	for(i=2;i<=1000;i++)
	{
		if(isPrime(i))
		{
			if(i<=100) { arr[0][j]=i; j++; }
			else if(i>100 && i<=200) { arr[1][k]=i; k++; }
			else if(i>200 && i<=300) { arr[2][l]=i; l++; }
			else if(i>300 && i<=400) { arr[3][m]=i; m++; }
			else if(i>400 && i<=500) { arr[4][n]=i; n++; }
			else if(i>500 && i<=600) { arr[5][o]=i; o++; }
			else if(i>600 && i<=700) { arr[6][p]=i; p++; }
			else if(i>700 && i<=800) { arr[7][q]=i; q++; }
			else if(i>800 && i<=900) { arr[8][r]=i; r++; }
			else { arr[9][s]=i; s++; }

		}
	}
	for(i=0;i<10;i++,printf("\n"))
		for(j=0;arr[i][j];j++)
			printf("%d ",arr[i][j]);
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
