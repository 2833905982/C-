#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 100
void mycreat();
void mynewcreat();
void mydisplay();
void myretake();
void myselect();
void mynumsort();
void mysort();
void myprint1();
void myprint2();
void myprint3();
void myfenduan();

struct student
{	
	char name[10];
	int grade[5];
	double ave;
	char num[10];
};

void myprint1()
{	
	char choose='\0',yes_no='\0';
	do   	
	{  	
		system("cls");	
		printf ("      |---------------------------|\n");	
		printf ("      |   ������ѡ����(0-4)     |\n");		
		printf ("      |---------------------------|\n");	
		printf ("      |   1----------¼��ɼ�     |\n");		
		printf ("      |   2----------ͳ�Ƴɼ�     |\n");		
		printf ("      |   3----------����ѧ��     |\n");	
		printf ("      |   4----------��ʾ����     |\n");	
		printf ("      |   0----------�˳�ϵͳ     |\n");	
		printf ("      |---------------------------|\n");	
		printf("                        ");      
		choose=getche();      	switch(choose)  
		{ 
		case '1':mycreat();  break;   			
		case '2':myprint2();  break;  		
		case '3':myprint3();  break;   		  
		case '4':mydisplay();  break;    	  
		case '0':break;	    
		default :printf("\n                       %cΪ�Ƿ�ѡ�\n",choose);	
		}      
		if(choose=='0')			
		{				
			printf("\n");		
			printf("��л����ʹ�ã�\n");		
			break;			
		}     
		printf("\n                        Ҫ����ѡ����(Y/N)��\n");    
		do      
		{ 
			yes_no=getch( );  
		} while(yes_no!='Y' && yes_no!='y'&& yes_no!='N' && yes_no!='n');	
	} while(yes_no=='Y' || yes_no=='y');
}  
void myprint2()
{	
	char choose='\0',yes_no='\0';
	do   
	{  	
		system("cls");	
		printf ("      |-----------------------------------|\n");	
		printf ("      |   ������ѡ����(0-4)             |\n");	
		printf ("      |-----------------------------------|\n");	
		printf ("      |   1----------��ѧ������           |\n");		
		printf ("      |   2----------����ƽ���ֲ�����     |\n");	
		printf ("      |   3----------ͳ�Ʒ�����           |\n");	
		printf ("      |   4----------����                 |\n");	
		printf ("      |   0----------�˳�ϵͳ             |\n");	
		printf ("      |-----------------------------------|\n");	
		printf("                        ");     
		choose=getche();     
		switch(choose)       
		{  
		case '1':mynumsort();  break;  
		case '2':mysort();  break;  		  
		case '3':myfenduan();  break;   	
		case '4':myprint1();  break;    	   
		case '0':break;	 
		default :printf("\n                       %cΪ�Ƿ�ѡ�\n",choose);
		}     
		if(choose=='0')	
		{		
			printf("\n");	
			printf("��л����ʹ�ã�\n");		
			break;	
		} 
		printf("\n                        Ҫ����ѡ����(Y/N)��\n"); 
		do 
		{ 
			yes_no=getch( );  
		} while(yes_no!='Y' && yes_no!='y'&& yes_no!='N' && yes_no!='n');	
	} while(yes_no=='Y' || yes_no=='y');
}
void myprint3()
{	
	char choose='\0',yes_no='\0';
	do   	
	{  		
		system("cls");		
		printf ("      |---------------------------------------|\n");	
		printf ("      |   ������ѡ����(0-4)                 |\n");	
		printf ("      |---------------------------------------|\n");	
		printf ("      |   1----------���ɲ���ӡ����֪ͨ��     |\n");	
		printf ("      |   2----------���ɲ���ӡ��ѧ֪ͨ��     |\n");	
		printf ("      |   3----------���ɲ���ӡ������         |\n");	
		printf ("      |   4----------����                     |\n");	
		printf ("      |   0----------�˳�ϵͳ                 |\n");	
		printf ("      |---------------------------------------|\n");	
		printf("                        ");   
		choose=getche();     
		switch(choose)       
		{  	
		case '1':myretake();  break;   
		case '2':myselect();  break;  		   
		case '3':mynewcreat();  break;   		  
		case '4':myprint1();  break;    	    
		case '0':break;	    
		default :printf("\n                       %cΪ�Ƿ�ѡ�\n",choose);	
		}     
		if(choose=='0')		
		{		
			printf("\n");		
			printf("��л����ʹ�ã�\n");		
			break;			
		}     
		printf("\n                        Ҫ����ѡ����(Y/N)��\n");   
		do      
		{ 
			yes_no=getch( );      
		} while(yes_no!='Y' && yes_no!='y'&& yes_no!='N' && yes_no!='n');	
	} while(yes_no=='Y' || yes_no=='y');
} 
void mycreat()
{
	int i=1,j=0;	
	struct student temp={0};	
	FILE*fp=NULL;	
	fp=fopen("d:\\yuan.dat","w");	
	if(fp==NULL)	
	{	
		printf("���ļ�ʧ�ܣ�\n");		
		return;	
	}	
	system("cls");
	printf("ע�⣺����ѧ��ʱ�뽫����λ������һ�²���λ��0���롣�������ѧ��Ϊ1000�������4λ��Ч���֡�");	
	printf("\n        �������1����¼��\n");	
	printf("      ѧ��(��#��������):");
	do
	{	
		gets(temp.num);
	}while(strcmp(temp.num,"")==0);
	printf("        ����(��#��������):");
	gets(temp.name);	
	printf("    ������ ���� Ӣ�� ���� ��� ���� 5��ɼ�(��#��������): ");	
	for(j=0;j<=4;j++)	
	{	
		scanf("%d",&temp.grade[j]);
	} 	
	while(temp.num[0]!='#'&&temp.name[0]!='#'&&temp.grade[0]!='#')
	{		
		fprintf(fp,"%23s%15s",temp.num,temp.name);	
		for(j=0;j<=4;j++)	
		{		
			fprintf(fp,"%5d",temp.grade[j]);	
		}	
		fprintf(fp,"\n");		
		i++;	
		printf("\n         �������%d����¼:\n",i);		
		printf("            ѧ��(��#��������):");		
		do	
		{		
			gets(temp.num);		
		}
		while(strcmp(temp.num,"")==0);		
		printf("        ����(��#��������):");	
		gets(temp.name);	
		printf("    ������ ���� Ӣ�� ���� ��� ���� 5��ɼ� (��#��������): ");	
		for(j=0;j<=4;j++)	
		{		
			scanf("%8d",&temp.grade[j]);		
		} 
	}	fclose(fp);
}
void mynumsort()
{
	int i=0,j=0,k=0,n=0,grade=0,num=0,m=0,ww;	
	struct student temp[N]={0};	
	struct student a;
	FILE *fp=NULL;
	FILE *fq=NULL;	
	fp=fopen("d:\\yuan.dat","r");
	if(fp==NULL)	
	{		
		printf("\n       ���ļ�ʧ��!\n");		
		return; 	
	}	
	system("cls");	
	while(feof(fp)==0)	
	{		
		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);	
		if(ww==-1) break;	
		for(j=0;j<5;j++)	
		{	
			fscanf(fp,"%d",&temp[n].grade[j]);			
		}		
		n++;
	}
	printf("n=%d",n);
	fclose(fp);  
	printf("\n");  
	for(i=0; i<n; i++)       
	{ 	
		k=i;    
		for(j=k+1; j<n; j++)		
			if(strcmp(temp[k].num,temp[j].num)>0)  
				k=j;  	
		a=temp[i];  	
		temp[i]=temp[k]; 		
		temp[k]=a;  
	}   
	for(k=0;k<n;k++)
	{	
		printf("%10s��  %10sͬѧ",temp[k].num,temp[k].name);
		for(m=0;m<5;m++)		
		{		
			printf("%5d��",temp[k].grade[m]);	
		}	
		printf("\n");
	}	
	if(n==0)printf("\n     �ļ����޼�¼��\n");	
	else printf("\n         �ļ�����%d����¼",n); 
	fq=fopen("d:\\std.dat","w");	
	if(fq==NULL)	
	{
		printf("���ļ�ʧ�ܣ�\n");	
		exit(0);
	}	
	for(i=0;i<n;i++)	
	{	
		fprintf(fq,"%23s%15s",temp[i].num,temp[i].name);	
		for(j=0;j<5;j++)		
		{		
			fprintf(fq,"%2d",temp[i].grade[j]);	
		}		
		fprintf(fq,"\n");
	}
	fclose(fq);
	printf("��������� ������d:\std.dat�ļ����У������");
}
void mysort()
{
	struct student temp[N]={0},a[N]={0};
	int i=0,j=0,n=0,ww=0;	
	FILE*fp=NULL;
	FILE*fq=NULL;	
	fp=fopen("d:\\yuan.dat","r");	
	if(fp==NULL)	
	{	
		printf("���ļ�ʧ�ܣ�\n");	
		exit(0);
	}	
	system("cls");	
	while(feof(fp)==0)
	{	
		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);	
		if(ww==-1) break;	
		for(j=0;j<5;j++)	
		{	
			fscanf(fp,"%d",&temp[n].grade[j]);	
		}	
		n++;
	} 	
	for(i=0;i<n;i++)
	{	
		for(j=0;j<5;j++)	
		{		
			temp[i].ave=temp[i].ave+temp[i].grade[j];	
		}		
		temp[i].ave=temp[i].ave/5;		
	}
	for(i=0;i<n;i++)
	{		
		if(temp[i].ave<temp[i+1].ave)	
		{			
			a[i]=temp[i];		
			temp[i]=temp[i+1];	
			temp[i+1]=a[i];	
		}	
	}	
	fq=fopen("d:\\sort.dat","w");
	if(fq==NULL)	
	{	
		printf("���ļ�ʧ�ܣ�\n");	
		exit(0);
	}
	for(i=0;i<n;i++)
	{	
		fprintf(fq,"%23s%15s%10.2f",temp[i].num,temp[i].name,temp[i].ave  ); 
		for(j=0;j<5;j++)	
		{		
			fprintf(fq,"%2d",temp[i].grade[j]);	
		}	
		fprintf(fq,"\n");	
	} 	
	fclose(fq);
	printf("��������� ������d:\sort.dat�ļ����У������");
} 
void myfenduan()
{		
	int i=0,j=0,n=0,ww;	int b[N]={0},c[N]={0},d[N]={0},e[N]={0},f[N]={0};	
	struct student temp[N]={0};
	FILE*fp=NULL;	
	fp=fopen("d:\\yuan.dat","r");	
	if(fp==NULL)
	{	
		printf("���ļ�ʧ�ܣ�\n");		
		return;
	}	
	system("cls");
	while(feof(fp)==0)
	{	
		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);	
		if(ww==-1) break;	
		for(j=0;j<5;j++)	
		{		
			fscanf(fp,"%d",&temp[n].grade[j]);	
		}	
		n++;	
	}
	for(i=0;i<n;i++)
	{		
		for(j=0;j<5;j++)		
		{
			if(temp[i].grade[j]>=90)		
				b[j]=b[j]+1;	
			else if(temp[i].grade[j]>=80)	
				c[j]=c[j]+1;		
			else if(temp[i].grade[j]>=70)			
				d[j]=d[j]+1;			
			else if(temp[i].grade[j]>=60)	
				e[j]=e[j]+1;			
			else f[j]=f[j]+1;			
		}	
	}	
	printf("���ſΡ���������ѧ��������\n");
	printf("________________________________________________________\n");
	printf("     |90������ | 80~89�� | 70~79�� | 60~69�� | 60������ \n");
	printf("--------------------------------------------------------\n");	
	printf("����_____%d________%d_________%d________%d_________%d___\n",b[0],c[0],d[0],e[0],f[0]);
	printf("__________________________________________________\n");	
	printf("Ӣ��_____%d________%d_________%d________%d_________%d___\n",b[1],c[1],d[1],e[1],f[1]);
	printf("__________________________________________________\n");	
	printf("����_____%d________%d_________%d________%d_________%d___\n",b[2],c[2],d[2],e[2],f[2]);
	printf("__________________________________________________\n");	
	printf("���_____%d________%d_________%d________%d_________%d___\n",b[3],c[3],d[3],e[3],f[3]);
	printf("__________________________________________________\n");	
	printf("����_____%d________%d_________%d________%d_________%d___\n",b[4],c[4],d[4],e[4],f[4]);
	printf("__________________________________________________\n");
	fclose(fp);
}
void mydisplay()
{	
	int n=0,j=0,k=0,m=0,ww;
	struct student temp[N]={0};
	FILE*fp=NULL;	
	fp=fopen("d:\\yuan.dat","r");	
	if(fp==NULL)
	{	
		printf("���ļ�ʧ�ܣ�\n");	
		return;
	}	
	system("cls");	
	while(feof(fp)==0)	
	{	
		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);		
		if(ww==-1) break;	
		for(j=0;j<5;j++)	
		{		
			fscanf(fp,"%d",&temp[n].grade[j]);		
		}	
		n++;	
	}
	for(k=0;k<n;k++)
	{	
		printf("%23s  %15s  ",temp[k].num,temp[k].name);		
		for(m=0;m<5;m++)	
		{			
			printf("%d  ",temp[k].grade[m]);	
		}		printf("\n");
	}	
	if(n==0)printf("\n  �ļ����޼�¼��\n");
	else printf("\n     �ļ��й���%d����¼��",n);	
	fclose(fp);
}	void myretake()
{
	int i=0,e=0,j=0,n=0,s[5]={0},ww;	
	struct student temp[N]={0};	
	FILE*fp=NULL;	fp=fopen("d:\\yuan.dat","r");	if(fp==NULL)	{		printf("���ļ�ʧ�ܣ�\n");		return;	}	while(feof(fp)==0)	{		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);		if(ww==-1) break;		for(j=0;j<5;j++)		{			fscanf(fp,"%d",&temp[n].grade[j]);					}		n++;	}	for (i=0;i<n;i++)	{		for(j=0;j<5;j++)		{			if(temp[i].grade[j]<60)			s[i]++;		}				if(s[i]>=1 && s[i]<=3)		{	printf("\n");			printf("ѧ��%10s   ����%10s \n",temp[i].num,temp[i].name);		if(temp[i].grade[0]<60)			printf("%10s���ĸ����ɼ�Ϊ%6d����Ҫ����,����2011��2��26������9���ڽ�ѧ¥5023���ҽ��в�������\n",temp[i].name,temp[i].grade[0]);				if(temp[i].grade[1]<60)			printf("%10s����Ӣ��ɼ�Ϊ%6d����Ҫ����,����2011��2��27������9���ڽ�ѧ¥5023���ҽ��в�������\n",temp[i].name,temp[i].grade[1]);				if(temp[i].grade[2]<60)	        printf("%10s��������ɼ�Ϊ%6d����Ҫ����,����2011��2��28������9���ڽ�ѧ¥5023���ҽ��в�������\n",temp[i].name,temp[i].grade[2]);				if(temp[i].grade[3]<60)	        printf("%10s���ı�̳ɼ�Ϊ%6d����Ҫ����,����2011��2��26������3���ڽ�ѧ¥5023���ҽ��в�������\n",temp[i].name,temp[i].grade[3]);				if(temp[i].grade[4]<60)	        printf("%10s�������ܳɼ�Ϊ%6d����Ҫ����,����2011��2��28������3���ڽ�ѧ¥5023���ҽ��в�������\n",temp[i].name,temp[i].grade[4]);		}	}	for(e=0;e<n;e++)	{		if(s[e]!=0)		{			printf("\n");			printf("����ѧ����Ҫ������");		}		else		{			printf("\n");			printf("û��ѧ����Ҫ������");		}		break;	}}void myselect(){	int i=0,k=0,s[5]={0},n=0,j=0,ww;	struct student temp[N]={0};	FILE*fp=NULL;	fp=fopen("d:\\yuan.dat","r");	if(fp==NULL)	{		printf("���ļ�ʧ�ܣ�\n");		return;	}	while(feof(fp)==0)	{		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);				for(j=0;j<5;j++)			{				ww=fscanf(fp,"%d",&temp[n].grade[j]);				if(ww==-1) break;		}		n++;	}       for(i=0;i<n-1;i++)	   {              		   for(k=0;k<5;k++)			 {			   if (temp[i].grade[k]<60)				   s[i]=s[i]+1;			  }		  			if(s[i]>3)			{				printf("\n");				printf("ѧ��%10s  ����%10s  ������������Ŀ�ĿΪ%d�ţ�����3�ţ��������ѧ��\n",temp[i].num,temp[i].name,s[i]);				if (temp[i].grade[0]<60)					printf("%15s���ĸ����ɼ�Ϊ%6d��Ϊ������\n",temp[i].name,temp[i].grade[0]);									if  (temp[i].grade[1]<60)					printf("%15s����Ӣ��ɼ�Ϊ%6d��Ϊ������\n",temp[i].name,temp[i].grade[1]);									if  (temp[i].grade[2]<60)					printf("%15s��������ɼ�Ϊ%6d��Ϊ������\n",temp[i].name,temp[i].grade[2]);									if  (temp[i].grade[3]<60)					printf("%15s���ı�̳ɼ�Ϊ%6d��Ϊ������\n",temp[i].name,temp[i].grade[3]);									if  (temp[i].grade[4]<60)					printf("%15s�������ܳɼ�Ϊ%6d��Ϊ������\n",temp[i].name,temp[i].grade[4]);								}	   }} void mynewcreat(){	int i=0,k=0,s[5]={0},z[5]={0},v=0,n=0,m=0,j=0,p=0,c=0,ww;	struct student temp[N]={0};	FILE*fp=NULL;	FILE*fq=NULL;	fp=fopen("d:\\yuan.dat","r");	if(fp==NULL)	{		printf("���ļ�ʧ�ܣ�\n");		return;	}	while(feof(fp)==0)	{		ww=fscanf(fp,"%23s%15s",temp[n].num,temp[n].name);		if(ww==-1) break;		for(j=0;j<5;j++)		{			fscanf(fp,"%d",&temp[n].grade[j]);					}		n++;	}		while(i<=n)		{			for(k=0;k<5;k++)			{				if (temp[i].grade[k]<60)				s[i]=s[i]+1;			}						for(v=0;v<5;v++)			{				if(temp[i].grade[v]==0)					z[i]++;			}			if(z[i]==5)			{				break;			}			if(s[i]<=3)			{				i++;			}			if(s[i]>3)			{				for(c=i;c<=n;c++)				{					temp[c]=temp[c+1];				}				s[i]=0;				}		}					printf("\n");		printf("ɾ������ѧ��ѧ����ѧ������Ϊ��");		printf("\n");		for(p=0;p<n-1;p++)		{			printf("\n");			printf("%10s��  %10s��  ",temp[p].num,temp[p].name);			for(m=0;m<5;m++)				{					printf("%d  ",temp[p].grade[m]);				}			printf("\n");		}	fq=fopen("d:\\next.dat","w");	if(fq==NULL)	{		printf("���ļ�ʧ�ܣ�\n");		exit(0);	}	for(i=0;i<n;i++)	{		fprintf(fq,"%23s%15s",temp[i].num,temp[i].name);		for(j=0;j<5;j++)		{			fprintf(fq,"%2d",temp[i].grade[j]);		}		fprintf(fq,"\n");	}fclose(fq);	printf("��������� ������d:\next.dat�ļ����У������");}main(){


