#include <stdio.h>

int main()
{
int a[3][2], b[2][3];
	int i,j;
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=1;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=1;j++)
	{
	b[j][i]=a[i][j];
	}
	}
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=1;j++)
	{
	printf("%d",b[i][j]);
	}
	}
	return 0;
}