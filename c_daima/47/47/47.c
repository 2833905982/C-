#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,y=0,k=0,x,z;
	int *p;
	printf("please input a unsertain shuzu \n");
	scanf("%d",&j);
	p=(int *)malloc(j*sizeof(int));
	for(i=0;i<j;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<j;i++)
	{
		k=p[i]+k;
	}
	x=k/j;
	for(i=0;i<j;i++)
	{
		y=(p[i]-x)*(p[i]-x)+y;
	}
	z=y/j;
	printf("%d\n",x);
	printf("%d\n",z);
	return 0;
}