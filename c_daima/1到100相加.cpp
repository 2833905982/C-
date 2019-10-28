#include <stdio.h>

int main ()
{
	int s;
	int n=0;
	
	do{
		n=n+1;
		s=s+n;
	}
	while (n < 100);
	printf("%d",s);
	return 0;
	
}
