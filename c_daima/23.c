#include <stdio.h>

int main()
{
	int x;
	int t=0;
	int c;
	printf("����������������\n");
	scanf("%d",&x);
	c = x;
	
	while (x>1){
		x/=2;
		t++;
	}
	printf("l0g2 of %d is %d.",c,t);
	
	return 0;
 } 

