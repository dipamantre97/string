#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	char temp;
	int i,j,
	    printf("enter string");
	gets(s);

	for(i=0,j=strlen(s-1);i<=j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("reverse string=%s",s);
}

