#include <stdio.h>
#include <stdlib.h>											//��һ�����гɹ����ļ���
#define N 4

int main()
{
	struct student											//��һ��ʹ�ýṹ�������
	{
		char name[10];
		long int num;
		float score;
	};
	struct student a[N],s[N]={{"zhao",20050102,83.5},{"qian",20050103,92},{"sun",20050104,73.5},{"li",200501006,87}};

	FILE *p;
	int i;
	if((p=fopen("t.dat","wb"))==NULL)						//�ж��ļ��Ƿ�򿪣����ʧ���򷵻�NULL��
	{
		printf("file creat error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)
	{														//fwrite(buffer,size,count,fp)
		fwrite(&s[i],sizeof(struct student),1,p);			//��sΪ�׵�ַ���ڴ��ж�ȡ,count�Σ�ÿ��size���ֽڣ�д��fp��ָ���ļ��С�
	}
	fclose(p);
	if((p=fopen("t.dat","rb"))==NULL)
	{
		printf("file open error!\n");
		exit(0);
	}
	for(i=0;i<N;i++)										//fread(buffer,size,count,fp)
	{
		fread(&a[i],sizeof(struct student),1,p);			//��fp�ж�ȡ�ļ�count�Σ�size��ÿ�ζ�ȡ���ֽ������浽bufferΪ�׵�ַ���ļ��С�
		printf("%s,%ld,%.2f\n",a[i].name,a[i].num,a[i].score);
	}
	fclose(p);
}






						//���ļ���д�˽ӽ�һ���£��Ƚ�ˮ����û�з���ϸ��Ҳû�п��ǵ�������ԭ���ҵĴ�������Ū������
						//���ܼ��ͣ���ȥ�ľ͹�ȥ�ɣ����ٹ����ڻ����ŵ��¹�ȥ�������ߵø�Զ����֮�����Լ��õ㡣