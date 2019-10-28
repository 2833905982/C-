#include <stdio.h>

int main()
{
	int x;
	int f;
	scanf("%d",&x);
	if (x<0){
	f = x - 2;
	}else if(x>5){
		f = x + 6;
	}else{
		f = x*3;
	}printf("%d",f);
	return 0;
}
