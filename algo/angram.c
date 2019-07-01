#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	printf("Enter string a:");
	scanf("%s",a);
	printf("Enter string b:");
	scanf("%s",b);
	char temp;
	int i,j;
	int n=strlen(a);
	int m=strlen(b);
	if(n!=m){
		printf("Given strings are: NOT Anagram\n");
		return 0;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i]) 
		{
			printf("Given strings are: NOT Anagram\n");
			return  0;
		}
	}
	printf("Given strings are : ANAGRAM\n");
}
