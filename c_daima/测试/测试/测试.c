#include <stdio.h>

int main()
{
	int i,j,n;
	for(i=1;i<=9;i++)
	{
	// �������forѭ��ע�͵������������������
//	for(n=1; n<=9-i; n++)
////		printf(" ");
		for(j=1;j<=i;j++)
			printf("%d*%d=%d \t",j,i,i*j);
	printf("\n");
	}
	return 0;
}
