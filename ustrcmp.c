#include<stdio.h>
#include<string.h>
int main()
int *ustrcmp(char st1r[],str2[])
{
	int i;
	for(i=0;str1[i]==str2[i];i++)
		if(str1[i]!='\0')
			return 0;
	return (str1[i]-str2[i]);
        
}


{
        char str1[50],str2[50];
        printf("enter string 1 &2");
        gets(str1);
        get(str2);
        if(ustrcmp(str1,str2))==0);
	printf("string same");
	else
		printf("not same");
}


