#include<stdio.h>
#include<string.h>
main()
{
char s1[30],s2[30]="Hello ",s3[30]=" How are you ?";
printf("Enter a Name: ");
gets(s1);
strcat(s2,s1);
strcat(s2,s3);
puts(s2);
}
