#include <stdio.h>

int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int *p;
	/*p=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\n",p[i]+j);
		}
	}*/
	p=a[0];
	do{
		
		printf("%4d",*p);
		p++;
		if((p-a[0])%4==0)
		{

			printf("\n");
		}
	
	}while(p<a[0]+12);
	return 0;
}