#include <stdio.h>

int main()
{	
	int a[4]; 
	int i=0,j=0,t,n;
	printf("please input number of data\n");
	scanf("%d",&n);
	printf("intput %d number£»\n",n);
	
	for(i=0;i<n;i++){ 
	scanf("%d",&a[i]);
	} 
	while(j<=n-1)
	{
	j++;
	for(i=0;i<=n-j-1;i++)
	{ 
	if(a[i]>a[i+1])
	{
	t=a[i];
	a[i]=a[i+1];
	a[i+1]=t; 
	} 
	}
}
	for(i=0;i<n;i++)
	{
		printf("%4d\n",a[i]);
	}
	return 0;
} 
