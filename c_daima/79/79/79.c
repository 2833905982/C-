#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	float total=0;
	float price,p[3]={12.3,45.6,78.9};
	int i,num,n[3]={10,20,30};

	if((fp=fopen("list.dat","w"))==NULL)
	{
		printf("file creat error!\n");
		exit(0);
	}
	for(i=0;i<3;i++)
	{
		fprintf(fp,"%.2f %d\n",p[i],n[i]);
	}
	fclose(fp);
	if((fp=fopen("list.dat","a+"))==NULL)
	{
		printf("file open error!\n");
		exit(0);
	}
	while(!feof(fp))
	{
		fscanf(fp,"%.2f %d\n",&price,&num);
		total+=price*num;
	}
	fprintf(fp,"%s %.2f","total money:",total);
	fclose(fp);
}