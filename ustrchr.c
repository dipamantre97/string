#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],ch,*p=0;
	printf("enter string");
	gets(a);
	printf("enter char");
	scanf("%d",&ch);
	p=ustrchr(a,ch);
	if(p)
	{
		printf("%c is found at %d\n",ch,p-a);
	}
	else
	{
		printf("%c not found\n",ch);
	}

}

