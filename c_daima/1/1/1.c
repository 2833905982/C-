#include <stdio.h>

int main()
{
	int a[3][3];
	int i,j,s=0;

	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<=2;i++)
	{
	s = s + a[i][i];
	}
	
printf("%d",s);
return 0;
}

