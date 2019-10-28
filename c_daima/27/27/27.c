#include <stdio.h>
#define m 3
#define n 4

void swap(int a[m][n],int p[n]);
int main()
{
	int a[m][n],p[n];
	int i,j,k;
	printf("please yi ge shu zu.\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	swap(a,p);
	for(k=0;k<4;k++)
	{
	printf("   %4d    \n",p[k]);
	}
	return 0;
}
void swap(int a[m][n],int p[n])
{
	int i,j,max;
	for(j=0;j<4;j++)
	{
		max=a[0][j];
		for(i=1;i<3;i++)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
			}
		}
		p[j]=max;
	}
}