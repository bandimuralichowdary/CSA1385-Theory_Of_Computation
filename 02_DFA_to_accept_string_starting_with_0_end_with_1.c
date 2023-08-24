// 2-DFA for strings that start with 0 and end with 1

#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,flag;
	int l;
	printf("Enter the string to check:");
	scanf("%s",&s);
	l=strlen(s);
	flag=1;
	for(i=0;i<l;i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag!=1)
	{
		printf("String is not valid\n");
	}
	if(flag==1)
	{
		if(s[0]=='0' && s[l-1]=='1')
		{
			printf("Accepted\n");
		}
		else
		{
			printf("Not Accepted\n");
		}
	}
	return 0;
}
