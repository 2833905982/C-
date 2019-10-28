#include <stdio.h>

int main()
{
	int i;
	char st[20],*p;
	p=st;
	printf("please input a long line\n");
	gets(st);
	for(i=0;p[i]!='\0';i++)
	{
	if(p[i]=='a')
	{
		printf("The line has 'a' in the string \"%s\".\n",p);
		break;
	}
	if(p[i]=='\0')
	{
		printf("There is no 'a' in the string \"%s\".\n",p);
	}
	
	}
	return 0;
}