													//ʱ �� һ �£��� �� ��  �ˣ��� �� ����

																	//������
#include <stdio.h>
#include <stdlib.h>

#define N 100											//������Ϊ���������100�ˣ��Ժ��л��ᣬ�ٸġ�

struct stu
	{
		char name[20];
		char num[20];
		int gread[5];
	};

void menu();											//����һ���˵�����ѡ�����
void tongji();											//����һ��ͳ�Ƴɼ���Ŀ¼��
void xueji();											//����һ��ͳ��ѧ����Ŀ¼��
void luruchengji();										//��һ����¼��ɼ���������
void tongjichrngji();									//�ڶ�����ͳ�Ƴɼ���������
void chulixueji();										//������������ѧ����������
void chaxunyouduoshaogejiludehanshu();					//���ĸ�����ѯ���ļ����ж��ٸ���¼��
void guanyubujige();									//����������ڲ����񲹿�ѧ��������������һ���İ��š�
void guanyutuixue();									//��������������ѧѧ���������Ĵ���
void newlist();											//���߸��������µ�����ͳ�ƵĽ����չʾ��

int main()
{
	 menu();

	
}
void menu()
{
	int choose=0;
	char yes_no;
	do
	{
		system("cls");
		printf("      |---------------------------\n");
		printf("      |---������ѡ���ţ�0-4��---\n");
		printf("      |---------------------------\n");
		printf("      |  1-------------¼��ɼ�   \n");
		printf("      |  2-------------ͳ�Ƴɼ�   \n");
		printf("      |  3-------------����ѧ��   \n");
		printf("      |  4-------------�˳�ϵͳ   \n");
		printf("      |---------------------------\n");
		printf("                                  \n");
		scanf("%d",&choose);
		switch(choose)															//��ת����Ҫ�ĺ�����ִ���ض��Ĺ��ܡ�
		{
			case 1:  luruchengji();break;										//��һ����¼��ɼ���������
			case 2:  tongji();break;											//�ڶ�����ͳ�Ƴɼ���������
			case 3:  xueji();break;												//������������ѧ����������
			case 4:  break;														//���ĸ����˳����򣬺�����
			default : printf("   ������˼���������%d����   ",choose);			
		}
		if(choose == 4)
		{
			printf("   \n");
			printf("��л����ʹ�á�\n");
			break;
		}
			printf("\n  ȷ���˳��𣿣�Y/N��  \n");								//ȷ���Ƿ��˳���
		do
		{
			yes_no=getchar();
		}while(yes_no!='Y' && yes_no!='y'&& yes_no!='N' && yes_no!='n');		//ȷ����С�����ԣ���ȷ���������Y��N��y��n.
	
		}while(yes_no=='Y'|| yes_no=='y');										//�����y�����ٴ�ѭ��������˵�ģʽ��
}
void tongji()
{
	int choose=0;
	char yes_no;
	do
	{
		system("cls");
		printf("     |-------------------------------\n");
		printf("     |        �������ţ�0--4����|\n  ");
		printf("     |-------------------------------\n");
		printf("     | 1--------ͳ����ѧ��������-----\n");
		printf("     | 2--------��ѧ������-----------\n");
		printf("     | 3--------ͳ�Ʒ����Ρ�---------\n");
		printf("     | 4--------���ء�---------------\n");
		printf("     | 0--------�˳�ϵͳ��-----------\n");
		printf("     |-------------------------------\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: chaxunyouduoshaogejiludehanshu();break;
			case 2: tongjichrngji();break;
			case 3: chulixueji();break;
			case 4: menu();break;
			case 0: break;
			default : printf("\n�������������%dΪ�Ƿ�ѡ�\n",choose);
		}
		if(choose==0)
		{
			printf("\n");
			printf("��л����ʹ�ã�\n");
			break;
		}
		printf("Ҫ����ѡ����(Y/N)��\n");
		do
		{
			scanf("%c",&yes_no);
		}while(yes_no=='Y' && yes_no=='y' && yes_no=='N' && yes_no=='n');
	}while(yes_no=='Y'||yes_no=='y');
}
void xueji()
{
	int choose=0;
	char yes_no;
	do
	{
		system("cls");
		printf("     |-------------------------------------\n");
		printf("     |       �������ţ�0--4��.         | \n");
		printf("     |-------------------------------------\n");
		printf("     | 1-------���ɴ�ӡ����ѧ���ɼ�����----\n");
		printf("     | 2-------���ɴ�ӡ��ѧѧ���ɼ�����----\n");
		printf("     | 3-------���ɲ���ӡ�����ᡣ----------\n");
		printf("     | 4------���ء�-----------------------\n");
		printf("     | 0------�˳�ϵͳ��-------------------\n");
		printf("     |-------------------------------------\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: guanyubujige();	break;
			case 2: guanyutuixue(); break;
			case 3: newlist();      break;
			case 4: menu();         break;
			case 0: break;
			default : printf("������˼�������������%dΪ�Ƿ�ѡ��!\n",choose);
		}
		if(choose==0)
		{
			printf("\n");
			printf("��л����ʹ�á�\n");
			break;
		}
		printf("\n    Ҫ����ѡ����(Y/N)?     \n");
		do
		{
			scanf("%c",&yes_no);
		}while(yes_no=='Y' && yes_no=='y' && yes_no=='N' && yes_no=='n');
	}while(yes_no=='Y' || yes_no=='y');
}

void luruchengji()
{
	
	int i=1,j;
	struct stu student;
	FILE *fp;
	if((fp=fopen("t.dat","w"))==NULL)
	{
		printf("        ������˼�����ļ�ʧ��\n");
		exit(0);
	}
	system("cls");
	printf("ע�⣬����ѧ��ʱ���뽫���е�λ������һ�£�����Ļ����㲹�롣\n");
	printf("\n       �������һ�����ݡ�    \n");
	printf("    ѧ�ţ���#�������롣��\n");
	scanf("%s",&student.num);
	//gets(student.num);
	printf("    �����ã�#��������  \n");
	//gets(student.name);
	scanf("%s",student.name);
	printf("   ������  ����  Ӣ��  ����  ���  ����  5��ĳɼ�������#������\n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&student.gread[j]);
	}
	while(student.num[0] != '#' && student.name[0] != '#' && student.gread[0] != '#')
	{
		fprintf(fp,"%23s %15S",student.num,student.name);
		for(j=0;j<5;j++)
		{
			fprintf(fp,"%5d",student.gread[j]);
		}
		fprintf(fp,"\n");
		i++;
		printf("�������%d����¼��\n",i);
		printf("ѧ�ţ���#�������롣��\n");
		scanf("%s",&student.num);											//Դ���룬������һ������ֵĶ������������ĳ��ħ��,������û��д��
		printf("       ������#�������롣\n");
		scanf("%s",student.name);
		printf("       ������ ����  Ӣ��  ����  ���  ����  5��ĳɼ�������#�������룩\n");
		for(j=0;j<5;j++)
		{
			scanf("%8d",&student.gread[j]);
		}
	}
	fclose(fp);
}
void tongjichrngji()														//ͳ��ѧ���ĳɼ���
{
	int i=0,j=0,k=0,n=0,grade=0,num=0,m=0,ww;
	struct stu tem[N]={0};													//����һ���ṹ������������������ݡ�
	struct stu a;
	FILE *fp=NULL;															//����һ��fp�ļ���
	FILE *fq=NULL;															//����һ��fq�ļ���
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("\n     �ļ���ʧ�ܡ�     \n");
		exit(0);
	}
	system("cls");															//system("cls"),�����þ�������������Ļ��ˢ��һ�¡�
	while(feof(fp)==0)
	{
		ww=fscanf(fp,"%23s %15s",tem[n].num,tem[n].name);			
		if(ww==-1)
		{
			break;
		}
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&tem[n].gread[j]);									
		}
		n++;
	}
	printf("n=%d",n);
	fclose(fp);
	printf("\n");
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=k+1;j<n;j++)
		{
			if(tem[k].num>tem[j].num)										//�Ƚ�ѧ�ŵĴ�С�������г�Ա��ѧ�Ŵ�С˳������������
			{
				k=j;
				a=tem[i];
				tem[i]=tem[k];
				tem[k]=a;
			}
		}
	}
	for(k=0;k<n;k++)
	{
		printf("%20s�� %20ͬѧ",tem[k].num,tem[k].name);					//�����кõĵ�ѧ����Ա���������е�fq���ļ��С�
		for(m=0;m<5;m++)
		{
			printf("%5d��",tem[k].gread[m]);
		}
		printf("\n");
	}
	if(n==0)																//ʵ�ּ�¼ѧ���ĸ��������Ҽ�ס�ǵڼ���ѧ����
	{
		printf("\n    �ļ���û�м�¼��    \n");
	}
	else
	{
		printf("\n    �ļ�����%d����¼��    \n");
	}

	if((fq=fopen("t.dat","w"))==NULL)
	{
		printf("���ļ���ʧ�ܣ�\n");
		exit(0);

	}
	for(i=0;i<n;i++)														//�����ݴ浽fq�ļ��С�
	{
		fprintf(fq,"%20s %10s",tem[i].num,tem[k].name);
		for(j=0;j<5;j++)
		{
			fprintf(fq,"%2d",tem[i].gread[5]);

		}
		fprintf(fq,"\n");
	}
	fclose(fq);
	printf("������ɣ����������t.dat���ļ����С������գ�");
}
void chulixueji()															//����ѧ���ĳɼ�����¼�����ɼ��ε�ѧ��������
{
	int i=0,j=0,n=0,ww;
	int b[N]={0},c[N]={0},d[N]={0},e[N]={0},f[N]={0};
	struct stu tem[N];
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("���ļ�ʧ�ܡ�\n");
		exit(0);
	}
	system("cls");
	while(feof(fp)==0)
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		if(ww=-1)
		{
			break;
		}
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&tem[n].gread[j]);
		}
		n++;
	}
	for(i=0;i<n;i++)															//�ó������ÿһ���ˣ���ÿ���˵ĳɼ���¼���ļ��С�
	{
		for(j=0;j<5;j++)														//��ÿ���˵����Ź��εĳɼ���������һ�顣
		{
			if(tem[i].gread[j]>=90)
			{
				b[j]=b[j]+i;
			}
			else if(tem[i].gread[j]>=80)
			{
				c[i]=c[i]+1;
			}
			else if(tem[i].gread[j]>=70)
			{
				d[i]=d[i]+1;
			}
			else if(tem[i].gread[j]>=60)
			{
				f[i]=f[i]+1;
			}
		}
	}	
		printf("���Ź��εģ����ɼ��ε�������\n");
		printf("-------------------------------------------------\n");
		printf("     |90�ּ�����|80-89��|70-79��|60-69��|60������\n");
		printf("-------------------------------------------------\n");
		printf("����---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("Ӣ��---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("����---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("���---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("����---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		fclose(fp);
}
void chaxunyouduoshaogejiludehanshu()										//��ѯ���ļ����ж��ٸ���¼��
{
	int n=0,j=0,k=0,m=0,ww=0;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("�ļ���ʧ�ܡ�\n");
		exit(0);
	}
	system("cls");
	while(feof(fp)==0)														//����Ϥ��whileѭ�������������ļ����е����ݣ���ʹ�á�
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		if(ww==-1)															//����ֵ�if�ж���������������Ȼ��֪����ʱʲô��˼��
		{
			break;
		}
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%8d",&tem[n].gread[j]);
		}
		n++;		
	}
	for(k=0;k<n;k++)
	{
		printf("%20s %20s",tem[k].num,tem[k].name);							//��ÿ���˵ĳɼ�������ӡ������
		for(m=0;m<5;m++)
		{
			printf("%8d",tem[k].gread[m]);
		}
		printf("\n");
	}
	if(n==0)
	{
		printf("\n  �ļ���û�м�¼!  \n");
	}
	else
	{
		printf("\n   �ļ��й���%d��¼��\n",n);								//�����������ж����ˣ�����˿��ԡ�
	}
	fclose(fp);
}
void guanyubujige()															//���ڲ����񲹿�����ѧ��������������һ���İ��š�
{
	int i=0,e=0,j=0,n=0,s[5]={0},ww,a=0;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("��ʧ�ܡ�\n");
		exit(0);
	}
	while(feof(fp)==0)
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		if(ww==-1)
		{
			break;
		}
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",tem[n].gread[j]);
		}
		n++;
	}
	
	for(i=0;i,n;i++)
	{
		for(j=0;j<5;j++)
		{
			if(tem[i].gread[j]<60)
			{
				s[i]++;
				a=a+s[i];													//�ж��Ƿ����˳ɼ�������
			}
			if(s[i]>=1 && s[i]<=3)
			{
				printf("\n");
				printf("ѧ����%20s  ������%20s",tem[i].num,tem[i].name);
				if(tem[i].gread[0]<=60)
				{
					printf("%15s���ĸ����ɼ���%6d,��Ҫ����������2019��11��20�������Ž�ѧ¥3408������\n",tem[i].name,tem[i].gread[0]);
				}
				if(tem[i].gread[1]<=60)
				{
					printf("%15s����Ӣ��ɼ���%6d,��Ҫ����������2019��11��20�������Ž�ѧ¥3408������\n",tem[i].name,tem[i].gread[1]);
				}
				if(tem[i].gread[2]<=60)
				{
					printf("%15s��������ɼ���%6d,��Ҫ����������2019��11��20�������Ž�ѧ¥3408������\n",tem[i].name,tem[i].gread[2]);
				}
				if(tem[i].gread[3]<=60)
				{
					printf("%15s���ı�̳ɼ���%6d,��Ҫ����������2019��11��20�������Ž�ѧ¥3408������\n",tem[i].name,tem[i].gread[3]);
				}
				if(tem[i].gread[4]<=60)
				{
					printf("%15s�������ܳɼ���%6d,��Ҫ����������2019��11��20�������Ž�ѧ¥3408������\n",tem[i].name,tem[i].gread[3]);
				}
				
			}
		}
	}
		if(a!=0)															//�����ܽᣬ��֪ʹ�������յ������
		{
			printf("����ѧ����Ҫ����!\n");
		}
		else 
		{
			printf("û��ѧ����Ҫ����!\n");
		}
}
void guanyutuixue()															//������ѧѧ���������Ĵ���
{
	int i=0,k=0,s[5]={0},n=0,j=0,ww;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("������˼���ļ���ʧ�ܡ������ԡ�\n");
		exit(0);
	}
	while(feof(fp)==0)
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		for(j=0;j<5;j++)
		{
			ww=fscanf(fp,"%d",&tem[n].gread[j]);
			if(ww=-1)
			{
				break;
			}
			n++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<5;k++)
		{
			if(tem[i].gread[k]<60)
			{
				s[i]=s[i]+1;
			}
			if(s[i]>3)
			{
				printf("\m");
				printf("ѧ����%20s ������%20s���������ĳɼ�������ĵĿ�ĿΪ%d�ţ�����3�ţ����Ѵﵽ��ѧ��\n",tem[n].num,tem[n].name,s[i]);
				if(tem[i].gread[0]<60)
				{
					printf("20s�ĸ����ɼ���%6d,Ϊ������\n",tem[i].name,tem[i].gread[0]);
				}
				if(tem[i].gread[1]<60)
				{
					printf("%20s��Ӣ��ɼ���%6d,Ϊ������\n",tem[i].name,tem[i].gread[1]);
				}
				if(tem[i].gread[2]<60)
				{
					printf("%20s������ɼ���%6d,Ϊ������\n",tem[i].name,tem[i].gread[2]);
				}
				if(tem[i].gread[3]<60)
				{
					printf("%20s�ı�̳ɼ���%6d,Ϊ������\n",tem[i].name,tem[i].gread[3]);
				}
				if(tem[i].gread[4]<60)
				{
					printf("%20s�����ܳɼ���%6d,Ϊ������\n",tem[i].name,tem[i].gread[4]);
				}
			}
		}
	}
}
void newlist()															//�����µ�����ͳ�ƵĽ����չʾ��
{
	int i=0,k=0,s[5]={0},z[5]={0},v=0,n=0,m=0,j=0,p=0,c=0,ww;
	struct stu tem[N]={0};
	FILE *fp=NULL;
	FILE *fq=NULL;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("���ļ�ʧ�ܡ�\n");
		exit(0);		
	}
	while(feof==0)
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		if(ww==-1)
		{
			break;
		}
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",tem[n].gread[j]);
		}
		n++;
	}
	while(i<=n)
	{
		for(k=0;k<5;k++)
		{
			if(tem[i].gread[k]<60)
			{
				s[i]=s[i]+1;
			}
		}
	/*	for(v=0;v<5;v++)
		{
			if(tem[i].gread[v]==0)										//����ֵ�һ�δ��룬�Ҳ��������Ǹ�ʲô�ģ�
			{
				z[i]++;
			}
		}
		if(z[i]==5)
		{
			break;
		}
			*/
		if(s[i]<=3)														//��������ۣ�������Ŀ�Ŀ�Ķ��٣�������һ���Ĺ�����
		{
			i++;
		}
		if(s[i]>3)
		{
			for(c=i;c<n;c++)
			{
				tem[c]=tem[c+1];										//forѭ��������ѧ��ѧ���ɼ�����������ɾ����
			}
			s[i]=0;
		}
	}
	printf("\n");
	printf("ɾ����Ȱ��ѧ��ѧ����ѧ���������ǣ�");
	printf("\n");
	for(p=0;p<n-1;p++)
	{
		printf("\n");
		printf("%20s�� %20s�ķ���",tem[p].num,tem[p].gread);			//���һ������ѧ������ͳ�ƺã���ʾ�������������ļ����С�
		for(m=0;m<5;m++)
		{
			printf("%d",tem[p].gread[m]);
			
		}
		printf("\n");

	}
	fq=fopen("t.next","w");
	if(fq==NULL)
	{
		printf("������˼�����ļ�ʧ�ܡ�\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		fprintf(fq,"%20s %20s",tem[i].num,tem[i].name);
		for(j=0;j<5;j++)
		{
			fprintf(fq,"%2d",tem[i].gread[j]);
		}
		fprintf(fq,"\n");
	}
	fclose(fq);
	printf("�����Ѿ���ɣ���������t.next�ļ����У�����顣\n");
}















																		//2019��1��14�գ�����д�ɸó���
																		//������˼���Һ�ˮ���ݰݡ�
																		//�Ҳ����������ˣ��ݰݣ�����ټ��ˡ�
																		//ף����ˣ�ף���Ҹ���
																		//�һ���ԭ�أ����ǣ���Ҳ���ˡ�
																					//�ݰݣ�