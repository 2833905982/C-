#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int number = rand() % 100 + 1;
	int a;
	int count = 0;
	printf("���Ѿ����������");
	srand(time(0));

	printf("number = %d",number);
	printf("�������������:\n");
	scanf("%d",&a);
	count++;
	if(a>number)
	{
		printf("����������ִ�");
	}
	else if(a<number)
	{
		printf("�����������С��");
	}

}