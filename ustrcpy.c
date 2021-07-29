#include<stdio.h>
#include<string.h>
int main()
char *ustrcpy(char str1[],str2[])
{
        int i=0;
	while(str1[i++]!=str2[i])
		;
	return str1;
}


{
        char str1[50],str2[50];
        printf("enter string 1 &2");
        gets(str1);
	gets(str2);
        printf("%s",ustrcpy(str1,str2));
}

