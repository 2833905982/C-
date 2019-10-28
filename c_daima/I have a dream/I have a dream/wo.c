#include <stdio.h>

int main ()
{
	int s;
	int n=0;
	scanf("%d",&s);
	do{
		s=s/10;
		n=n+1;
	}while (s > 0);
	

	printf("%d",n);
	system("pause");
	return 0;
 } 


