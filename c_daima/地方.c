#include <stdio.h>

main()
{
	int a;
	printf("input integer number\n");
	scanf("%d",&a);
	switch(a)
	{
	default :printf("monday\n");
	case 2:printf("tuesday\n");break;
	case 3:printf("wednesday\n");
	case 4:printf("thursday\n");
	case 5:printf("friday\n");
	case 6:printf("saturday\n");
	case 7:printf("sunday\n");

	}
	return 0;

}
