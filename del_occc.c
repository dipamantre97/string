#include<stdio.h>
#include<string.h>
void del_char(char *str,char ch)
{
	int i,j;
	for(i=0,j=0;i<=strlen(str)-1;i++)
		if(str[i]!=ch)
			str[j++]=str[i];
	str[j]='\0';
}
int main()
{
	char str[50];
	char ch;
	scanf("%c",&ch);
	gets(str);
	del_cha(str,ch)
		puts(str);
}

	
	

