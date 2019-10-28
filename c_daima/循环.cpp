#include <stdio.h>

int main()
{
	int s;
	int n=1;
	do{
	s=s+1/n;
	n=n+1;
	while (n<100);
	}
	printf("%f",s);
	return 0; 
	} 
