#include <stdio.h>

int search(int key,int a[],int length);

int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,90,89,76,54};
	int x;
	int loc;
	printf("������һ�����֣�\n");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc != -1)
	{
		printf("%d�ڵ�%d��λ��\n",x,loc+1);
	}
	else("%d������\n",x);
 	return 0;
 } 
 
 int search(int key,int a[],int length )
 {
 	 int ret=-1;
 	 int i;
 	 for(i=0;i<length;i++)
 	 {
 	 	if(a[i] == key){
 	 		ret = i;
 	 		break;
		  }
	  }
	  return ret;
 }

  
