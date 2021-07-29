#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,j;
	printf("enter string");
	gets(a);
	for(i=0,j=strlen(a)-1;i<=j;i++)
		if(a[i]!=a[j])
			break;
	if(i>j);
			printf("palindrome");
			else
			printf("not palindrome");
			}

