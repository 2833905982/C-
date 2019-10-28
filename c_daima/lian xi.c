#include <stdio.h>

int main()
{
	int x=1;
	int cnt=0;
	
	while(cnt<100)
	{
		int i;
		int isprime=1; 
		for(i=2;i<x;i++)
		{
		if(x % i == 0 ){
		
			isprime=0;
			break;
			}
		}
		if(isprime==1)
		{
			printf("%d\t",x);
			cnt++;
			if (cnt%5==0){
				printf("\n");
			}
		}
		x++;
	}
return 0;
}

