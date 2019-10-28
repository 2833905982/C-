#include <stdio.h>

int main()
{
	int a,b,c=2,d[100];
	int n=0,k=0;
	printf("please input a shuzi\n");
	scanf("%d",&a);
	b=a;

	for(c=2;a!=1;)
	{
		if(a%c==0)
		{
			d[n]=c;
			a=a/c;
			n++;
			c=2;
		}
		else 
		{
			c++;
		}
	}

	printf("%d = ",b);
	printf("%d",d[0]);
	for(k=1;k<n;k++)
	{
		printf(" * %d",d[k]);
	}
	printf("\n");
	return 0;
}