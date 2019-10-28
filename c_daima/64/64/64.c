#include <stdio.h>
#include <stdlib.h>
#define	N 4

int main()
{
	struct student
	{
		char name[10];
		long int num;
		float score;
	};
	struct student a[N],s[N]={{"zhao",20050102,83.5},
	{"Qian",20050106,92},{"Sun",20050104,73.5},{"li",20050106,87}};

	FILE *fp;
	int i;
	if((fp=fopen("t.dat","wb"))==NULL)
	{
		printf("file creat error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)
	{
		fwrite(&s[i],sizeof(struct student),1,fp);	
	}
	fclose(fp);
	if((fp=fopen("t.dat","rb"))==NULL);
	{
		printf("file open error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)
	{
		fread(&a[i],sizeof(struct student),1,fp);
		printf("\n%s,%ld,%f",a[i].name,a[i].num,a[i].score);
	}
	fclose(fp);
}