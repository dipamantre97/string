#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[30];
	int i,cnt=0;
	printf("enter string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(isspace(s[i])
				{
				cnt=cnt+1;
				}
				}
				printf("no of words in string=%d\n",cnt+1);
				}

