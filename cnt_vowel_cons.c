#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,vowel=0,cons=0;
	printf("enter string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			vowel++;
		}
		else
		{
			cons++;
		}

	}
	printf("vowel=%d,consonents=%d",vowel,cons);
