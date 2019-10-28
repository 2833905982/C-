#include <stdio.h>

int main()
{
	char str[20];
	int i;
	for(i=0;i<=12;i++)
	{
	scanf("%c",&str[i]);
	}
	for(i=0;i<=12;i++)
	{
	printf("%c",str[i]);
	}
	printf("\n");
	scanf("%s",str);
	printf("%s\n",str);
	return 0;
}