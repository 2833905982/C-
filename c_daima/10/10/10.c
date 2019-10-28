#include <stdio.h>
#include <string.h>
#define N 3

int main()
{
	char a[N][80],b[80];
	int i,j;
	for(i=0;i<N;i++)
	{
	gets(a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=N-1;j>i;j--)
		{
		if(strcmp(a[j],a[j-1])<0)
		{
			strcpy(b,a[i]);
			strcpy(a[j],a[j-1]);
			strcpy(a[j-1],b);
		}
		}
	}
	for(i=0;i<N;i++)
	{
	puts(a[i]);
	}
	return 0;
}

