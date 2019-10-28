#include <stdio.h>

int main()
{
	int x;
	int t;
	
	scanf("%d",&x);
	
	while(x>0){
		t=x%10;
		printf("%d\n",t);
		x/=10;
	} 
	return 0;
 } 
