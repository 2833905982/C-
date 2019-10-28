#include <time.h>
#include <stdio.h>
main()
{
    int seconds1,seconds2;
	int i = 0,
		j = 0,
		k = 0,
		n = 1000;
	seconds1 = time((time_t*)NULL);
	for(i = 0;i <= n;i++)
		for(j = 0;j <= n;j++)
			for(k = 0;k <= n;k++);
	seconds2 = time((time_t*)NULL);
    printf("%d\n", seconds2-seconds1);
}