#include <stdio.h>
#define N 3
int main ()
{
	int a[N][N];
	int i,j,sum=0;

	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<N;i++)
	{
	sum+=a[i][i]+a[i][N-i];
	}
	if(N % 2 != 0)
	{
	sum -= a[N/2][N/2];
	}
	printf("%d",sum);
	return 0;
}