#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main ()
{
FILE *fp;
char buff[100],word[30];
int i,j;
printf("Enter a word you want to search\n");
scanf("%s",word);
	fp=fopen("wrd.txt","r");
	while(fgets(buff,99,fp))
	{
	if((strcmp(buff,word)==0))
	{
	printf("Word found in a file\n");
	}
	}
	if(feof(fp)) printf("Word not foun\n");
}
