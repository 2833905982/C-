#include <stdio.h>

int main()
{
	int x,t,t1,t2;
	printf("������һ����λ����\n");
	scanf("%d",&x);
	
	if(x>99&&x<1000)
	{
		t=x%10%100;
		t1=x%100/10;
		t2=x/100;
		printf("%d %d %d",t,t1,t2);
	}
	return 0;
}
