													//时 隔 一 月，我 来 晚  了，还 望 见谅

																	//我来了
#include <stdio.h>
#include <stdlib.h>

#define N 100											//暂且认为最大能容纳100人，以后有机会，再改。

struct stu
	{
		char name[20];
		char num[20];
		int gread[5];
	};

void menu();											//编译一个菜单用于选择服务。
void tongji();											//编译一个统计成绩的目录。
void xueji();											//编译一个统计学籍的目录。
void luruchengji();										//第一个，录入成绩，函数。
void tongjichrngji();									//第二个，统计成绩，函数。
void chulixueji();										//第三个，处理学籍，函数。
void chaxunyouduoshaogejiludehanshu();					//第四个，查询此文件中有多少个记录。
void guanyubujige();									//第五个，关于不及格补考学生名单，及其下一步的安排。
void guanyutuixue();									//第六个，关于退学学生的名单的处理。
void newlist();											//第七个，关于新的名单统计的结果的展示。

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
		printf("      |---请输入选项编号（0-4）---\n");
		printf("      |---------------------------\n");
		printf("      |  1-------------录入成绩   \n");
		printf("      |  2-------------统计成绩   \n");
		printf("      |  3-------------处理学籍   \n");
		printf("      |  4-------------退出系统   \n");
		printf("      |---------------------------\n");
		printf("                                  \n");
		scanf("%d",&choose);
		switch(choose)															//跳转所需要的函数，执行特定的功能。
		{
			case 1:  luruchengji();break;										//第一个，录入成绩，函数。
			case 2:  tongji();break;											//第二个，统计成绩，函数。
			case 3:  xueji();break;												//第三个，处理学籍，函数。
			case 4:  break;														//第四个，退出程序，函数。
			default : printf("   不好意思，您输入的%d有误。   ",choose);			
		}
		if(choose == 4)
		{
			printf("   \n");
			printf("感谢您的使用。\n");
			break;
		}
			printf("\n  确定退出吗？（Y/N）  \n");								//确认是否退出。
		do
		{
			yes_no=getchar();
		}while(yes_no!='Y' && yes_no!='y'&& yes_no!='N' && yes_no!='n');		//确定大小都可以，且确保输入的是Y或N或y或n.
	
		}while(yes_no=='Y'|| yes_no=='y');										//如果是y，则再次循环，进入菜单模式。
}
void tongji()
{
	int choose=0;
	char yes_no;
	do
	{
		system("cls");
		printf("     |-------------------------------\n");
		printf("     |        请输入编号（0--4）。|\n  ");
		printf("     |-------------------------------\n");
		printf("     | 1--------统计有学生人数。-----\n");
		printf("     | 2--------按学号排序-----------\n");
		printf("     | 3--------统计分数段。---------\n");
		printf("     | 4--------返回。---------------\n");
		printf("     | 0--------退出系统。-----------\n");
		printf("     |-------------------------------\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: chaxunyouduoshaogejiludehanshu();break;
			case 2: tongjichrngji();break;
			case 3: chulixueji();break;
			case 4: menu();break;
			case 0: break;
			default : printf("\n您的输入的数字%d为非法选项。\n",choose);
		}
		if(choose==0)
		{
			printf("\n");
			printf("感谢您的使用！\n");
			break;
		}
		printf("要继续选择吗(Y/N)？\n");
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
		printf("     |       请输入编号（0--4）.         | \n");
		printf("     |-------------------------------------\n");
		printf("     | 1-------生成打印补考学生成绩单。----\n");
		printf("     | 2-------生成打印退学学生成绩单。----\n");
		printf("     | 3-------生成并打印新名册。----------\n");
		printf("     | 4------返回。-----------------------\n");
		printf("     | 0------退出系统。-------------------\n");
		printf("     |-------------------------------------\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: guanyubujige();	break;
			case 2: guanyutuixue(); break;
			case 3: newlist();      break;
			case 4: menu();         break;
			case 0: break;
			default : printf("不好意思，您输入的数字%d为非法选项!\n",choose);
		}
		if(choose==0)
		{
			printf("\n");
			printf("感谢您的使用。\n");
			break;
		}
		printf("\n    要继续选择吗(Y/N)?     \n");
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
		printf("        不好意思，打开文件失败\n");
		exit(0);
	}
	system("cls");
	printf("注意，输入学号时，请将所有的位数保持一致，不足的话用零补齐。\n");
	printf("\n       请输入第一个数据。    \n");
	printf("    学号（用#结束输入。）\n");
	scanf("%s",&student.num);
	//gets(student.num);
	printf("    姓名用（#）结束。  \n");
	//gets(student.name);
	scanf("%s",student.name);
	printf("   请输入  高数  英语  物理  编程  马哲  5组的成绩。（用#结束）\n");
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
		printf("请输入第%d个记录。\n",i);
		printf("学号（用#结束输入。）\n");
		scanf("%s",&student.num);											//源代码，这里有一个很奇怪的东西，好像具有某种魔力,但是我没有写。
		printf("       姓名用#结束输入。\n");
		scanf("%s",student.name);
		printf("       请输入 高数  英语  物理  编程  马哲  5组的成绩。（用#结束输入）\n");
		for(j=0;j<5;j++)
		{
			scanf("%8d",&student.gread[j]);
		}
	}
	fclose(fp);
}
void tongjichrngji()														//统计学生的成绩。
{
	int i=0,j=0,k=0,n=0,grade=0,num=0,m=0,ww;
	struct stu tem[N]={0};													//定义一个结构体变量，用来储存数据。
	struct stu a;
	FILE *fp=NULL;															//建立一个fp文件。
	FILE *fq=NULL;															//建立一个fq文件。
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("\n     文件打开失败。     \n");
		exit(0);
	}
	system("cls");															//system("cls"),的作用就是清屏，让屏幕给刷新一下。
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
			if(tem[k].num>tem[j].num)										//比较学号的大小，让所有成员按学号大小顺序排列下来。
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
		printf("%20s号 %20同学",tem[k].num,tem[k].name);					//将排列好的的学生成员，整理排列到fq的文件中。
		for(m=0;m<5;m++)
		{
			printf("%5d分",tem[k].gread[m]);
		}
		printf("\n");
	}
	if(n==0)																//实现记录学生的个数，并且记住是第几个学生。
	{
		printf("\n    文件中没有记录。    \n");
	}
	else
	{
		printf("\n    文件中有%d个记录。    \n");
	}

	if((fq=fopen("t.dat","w"))==NULL)
	{
		printf("打开文件夹失败！\n");
		exit(0);

	}
	for(i=0;i<n;i++)														//将数据存到fq文件中。
	{
		fprintf(fq,"%20s %10s",tem[i].num,tem[k].name);
		for(j=0;j<5;j++)
		{
			fprintf(fq,"%2d",tem[i].gread[5]);

		}
		fprintf(fq,"\n");
	}
	fclose(fq);
	printf("计算完成，结果保存在t.dat的文件夹中。请验收！");
}
void chulixueji()															//处理学生的成绩，记录各个成绩段的学生人数。
{
	int i=0,j=0,n=0,ww;
	int b[N]={0},c[N]={0},d[N]={0},e[N]={0},f[N]={0};
	struct stu tem[N];
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("打开文件失败。\n");
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
	for(i=0;i<n;i++)															//让程序遍历每一个人，让每个人的成绩记录在文件中。
	{
		for(j=0;j<5;j++)														//把每个人的五门功课的成绩，都遍历一遍。
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
		printf("各门功课的，各成绩段的人数。\n");
		printf("-------------------------------------------------\n");
		printf("     |90分及以上|80-89分|70-79分|60-69分|60分以下\n");
		printf("-------------------------------------------------\n");
		printf("高数---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("英语---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("物理---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("编程---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		printf("马哲---------%d-------%d------%d------%d-------%d\n",b[0],c[0],d[0],e[0],f[0]);
		printf("-------------------------------------------------\n");
		fclose(fp);
}
void chaxunyouduoshaogejiludehanshu()										//查询此文件中有多少个记录。
{
	int n=0,j=0,k=0,m=0,ww=0;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("文件打开失败。\n");
		exit(0);
	}
	system("cls");
	while(feof(fp)==0)														//很熟悉的while循环，用来调用文件夹中的数据，并使用。
	{
		ww=fscanf(fp,"%20s %20s",tem[n].num,tem[n].name);
		if(ww==-1)															//很奇怪的if判断条件到现在我依然不知道他时什么意思。
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
		printf("%20s %20s",tem[k].num,tem[k].name);							//把每个人的成绩都给打印出来。
		for(m=0;m<5;m++)
		{
			printf("%8d",tem[k].gread[m]);
		}
		printf("\n");
	}
	if(n==0)
	{
		printf("\n  文件中没有记录!  \n");
	}
	else
	{
		printf("\n   文件中共有%d记录。\n",n);								//最后，输出到底有多少人，参与此考试。
	}
	fclose(fp);
}
void guanyubujige()															//关于不及格补考名单学生名单，及其下一步的安排。
{
	int i=0,e=0,j=0,n=0,s[5]={0},ww,a=0;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("打开失败。\n");
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
				a=a+s[i];													//判断是否有人成绩不及格。
			}
			if(s[i]>=1 && s[i]<=3)
			{
				printf("\n");
				printf("学号是%20s  姓名是%20s",tem[i].num,tem[i].name);
				if(tem[i].gread[0]<=60)
				{
					printf("%15s您的高数成绩是%6d,需要补考，请与2019年11月20号于三号教学楼3408补考。\n",tem[i].name,tem[i].gread[0]);
				}
				if(tem[i].gread[1]<=60)
				{
					printf("%15s您的英语成绩是%6d,需要补考，请与2019年11月20号于三号教学楼3408补考。\n",tem[i].name,tem[i].gread[1]);
				}
				if(tem[i].gread[2]<=60)
				{
					printf("%15s您的物理成绩是%6d,需要补考，请与2019年11月20号于三号教学楼3408补考。\n",tem[i].name,tem[i].gread[2]);
				}
				if(tem[i].gread[3]<=60)
				{
					printf("%15s您的编程成绩是%6d,需要补考，请与2019年11月20号于三号教学楼3408补考。\n",tem[i].name,tem[i].gread[3]);
				}
				if(tem[i].gread[4]<=60)
				{
					printf("%15s您的马哲成绩是%6d,需要补考，请与2019年11月20号于三号教学楼3408补考。\n",tem[i].name,tem[i].gread[3]);
				}
				
			}
		}
	}
		if(a!=0)															//进行总结，告知使用者最终的情况。
		{
			printf("以上学生需要补考!\n");
		}
		else 
		{
			printf("没有学生需要补考!\n");
		}
}
void guanyutuixue()															//关于退学学生的名单的处理。
{
	int i=0,k=0,s[5]={0},n=0,j=0,ww;
	struct stu tem[N]={0};
	FILE *fp;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("不好意思，文件打开失败。请重试。\n");
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
				printf("学号是%20s 姓名是%20s，由于您的成绩不及格的的科目为%d门（多余3门），已达到退学。\n",tem[n].num,tem[n].name,s[i]);
				if(tem[i].gread[0]<60)
				{
					printf("20s的高数成绩是%6d,为不及格。\n",tem[i].name,tem[i].gread[0]);
				}
				if(tem[i].gread[1]<60)
				{
					printf("%20s的英语成绩是%6d,为不及格。\n",tem[i].name,tem[i].gread[1]);
				}
				if(tem[i].gread[2]<60)
				{
					printf("%20s的物理成绩是%6d,为不及格。\n",tem[i].name,tem[i].gread[2]);
				}
				if(tem[i].gread[3]<60)
				{
					printf("%20s的编程成绩是%6d,为不及格。\n",tem[i].name,tem[i].gread[3]);
				}
				if(tem[i].gread[4]<60)
				{
					printf("%20s的马哲成绩是%6d,为不及格。\n",tem[i].name,tem[i].gread[4]);
				}
			}
		}
	}
}
void newlist()															//关于新的名单统计的结果的展示。
{
	int i=0,k=0,s[5]={0},z[5]={0},v=0,n=0,m=0,j=0,p=0,c=0,ww;
	struct stu tem[N]={0};
	FILE *fp=NULL;
	FILE *fq=NULL;
	if((fp=fopen("t.dat","r"))==NULL)
	{
		printf("打开文件失败。\n");
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
			if(tem[i].gread[v]==0)										//很奇怪的一段代码，我不明白她是干什么的？
			{
				z[i]++;
			}
		}
		if(z[i]==5)
		{
			break;
		}
			*/
		if(s[i]<=3)														//分情况讨论，不及格的科目的多少，进行下一步的工作。
		{
			i++;
		}
		if(s[i]>3)
		{
			for(c=i;c<n;c++)
			{
				tem[c]=tem[c+1];										//for循环，将退学的学生成绩从吗，名单的删除。
			}
			s[i]=0;
		}
	}
	printf("\n");
	printf("删除被劝退学的学生后，学生的名册是：");
	printf("\n");
	for(p=0;p<n-1;p++)
	{
		printf("\n");
		printf("%20s号 %20s的分数",tem[p].num,tem[p].gread);			//最后一步，将学生名单统计好，显示出来，并存在文件夹中。
		for(m=0;m<5;m++)
		{
			printf("%d",tem[p].gread[m]);
			
		}
		printf("\n");

	}
	fq=fopen("t.next","w");
	if(fq==NULL)
	{
		printf("不好意思，打开文件失败。\n");
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
	printf("计算已经完成，并保存在t.next文件夹中，请查验。\n");
}















																		//2019年1月14日，初步写成该程序。
																		//不好意思，我很水，拜拜。
																		//我不会在想你了，拜拜，真的再见了。
																		//祝你好运，祝你幸福。
																		//我还在原地，但是，我也走了。
																					//拜拜！