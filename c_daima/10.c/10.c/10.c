#include <stdio.h>
#include <string.h>
#define n 3

int main()
{
	char a[n][80],b[80];
	int i,j;
	for(i=0;i<n;i++)
	{
	gets(a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=n-1;j>i;j--)
		if(strcmp(a[j],a[j-1])<0)
		{
			strcpy(b,a[j]);
			strcpy(a[j],a[j-1]);
			strcpy(a[j-1],b);
		}
	}
	for(i=0;i<n;i++)
	{
	puts(a[i]);
	}
	return 0;
}