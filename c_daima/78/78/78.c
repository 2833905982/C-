#include <stdio.h>
#include <stdlib.h>											//第一个运行成功的文件。
#define N 4

int main()
{
	struct student											//第一次使用结构体变量。
	{
		char name[10];
		long int num;
		float score;
	};
	struct student a[N],s[N]={{"zhao",20050102,83.5},{"qian",20050103,92},{"sun",20050104,73.5},{"li",200501006,87}};

	FILE *p;
	int i;
	if((p=fopen("t.dat","wb"))==NULL)						//判断文件是否打开，如果失败则返回NULL。
	{
		printf("file creat error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)
	{														//fwrite(buffer,size,count,fp)
		fwrite(&s[i],sizeof(struct student),1,p);			//从s为首地址的内存中读取,count次，每次size个字节，写到fp所指的文件中。
	}
	fclose(p);
	if((p=fopen("t.dat","rb"))==NULL)
	{
		printf("file open error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)										//fread(buffer,size,count,fp)
	{
		fread(&a[i],sizeof(struct student),1,p);			//从fp中读取文件count次，size是每次读取的字节数，存到buffer为首地址的文件中。
		printf("%s,%ld,%.2f\n",a[i].name,a[i].num,a[i].score);
	}
	fclose(p);
}






						//此文件，写了接近一个月，比较水，还没有方向，细节也没有考虑到，种种原因，我的错，但终于弄出来了
						//这周加油，过去的就过去吧，别再耿耿于怀，放得下过去，才能走得更远。总之，对自己好点。