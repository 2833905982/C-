#include <stdio.h>

int main()
{
	int i = 0,sum = 0;
	while(i < 100)				//Ìõ¼þÅÐ¶Ï
	{
		i = i + 1;
		sum = sum + i;
	}
	printf("%d\n",&sum);
	return 0;
}