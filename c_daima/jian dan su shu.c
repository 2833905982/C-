#include <stdio.h>

int main()
{
	int x;
	int i;
	int isprime=0;
	
	scanf("%d",&x);
	
	for(i=2;i<=x;i++)
	{
	if(x % i==0){
		isprime=1;
		break;
	}
	}if(isprime==0)
	{
		printf("是素数。"); 
	}
	if(isprime==1){
	 printf("不是素数。"); }  
	 return 0;
}
