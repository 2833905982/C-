#include <stdio.h>

int main()
{
	int x;
	double sum = 0;
	int cnt = 0;
	scanf("%d",&x);

	int number[5];
	
	while(x != -1)
	{ 
	number[cnt]=x;
	sum += x;
	cnt ++;
	scanf("%d",&x);
	}
	printf("%f",sum/cnt);
	int i;
	for(i = 1;i < cnt;i ++)
	{
		if(number[i]>sum/cnt)
		{
			printf("%d\n",number[1]);
		}
	}
}
