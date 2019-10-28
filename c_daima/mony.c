#include <stdio.h>

int main()
{ 
    const int standard=50;
	const double pay=8.25;
	int hours;
	double money=0.0;
	
	
	printf("请输入工作时间；\n");
	scanf ("%d",&hours);
	
	if (hours<=standard)
	{
		money=hours*pay;
	}
	else {money=standard*pay+(hours-standard)*(pay*1.5);
	}
	printf("%f\n",money);
	
	return 0;
}
