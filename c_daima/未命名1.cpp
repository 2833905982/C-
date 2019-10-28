#include <stdio.h>
#define m 3
#define n 4

void swap(int a[m][n],int p[n]);
int main()
{
	int a[m][n],p[n];
	int i,j;
	printf("please yi ge shu zu.\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	swap(a,p);
	printf("%d",p[n]);
	return 0;
}
void swap(int a[m][n],int p[n])
{
	int i,j,max;
	for(i=0;i<3;i++)
	{
		max=a[0][j];
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			p[n]=max;
		}
	}
} 
