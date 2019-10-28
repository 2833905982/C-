#include <stdio.h>

int yunsuan(int a ,int b)
{
	a=a+b;
	return a;
}
	
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	yunsuan(a,b);
	c=a+b;
	printf("%d ",c);
	return 0;
}