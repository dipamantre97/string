#include<stdio.h>
#include<string.h>
#include<ctype>
int main()
{
	char s="dipa@#$mantre111";
	int i;
	int digit=0,alpha=0,sc=0;
	while(s[i]!='\0')
	{
		if(isalpha(s[i])
				{
				alpha++;
				}
				else if(isdigit(s[i])
						{
						digit++;
						}
						else
						{
						sc++;
						}
						
						}
						printf("%d %d %d",alpha,digit,sc)
						}
