#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	int a;
	while(t>0){ 
	a = t % 10;
	printf("%d",a);
	t = t/10;
	}
	printf("%d ",a);
	return 0;
}
