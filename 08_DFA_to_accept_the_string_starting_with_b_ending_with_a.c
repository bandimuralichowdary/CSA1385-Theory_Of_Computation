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
		if(s[i]!='a' && s[i]!='b')
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
		if(s[0]=='b' && s[l-1]=='a')
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
