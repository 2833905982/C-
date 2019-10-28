#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	float a=0,b=0;
	int *arr;
	printf("请输入学生人数\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	a=a+arr[i]/n;
	b=b+(arr[i]-a)*(arr[i]-a)/n;
	printf("%f,%f",a,b);

}