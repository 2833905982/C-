#include <stdio.h>

int main ()
{
	int t;
	double s=0; 
	int sign=1.0;
	for(t=0;t<=2;t++);
	
	{
		s+= sign/t;
		sign=-sign;
		
	}
	printf ("%f",s);
	return 0;
	 
}
