#include <stdio.h>

int main()
{
	int number[10];
	int i;
	int j=0,t;
	
	for(i=0;1<10;i++)
 	{
 		number[i]=0;
	 }
	 for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	} 

while(j<10)
{	j++;

		for(i=0;i<=9-j;i++){
		
		
			if(number[i]>number[i+1])
			{
				t=number[i];
				number[i]=number[i+1];
				number[i+1]=t;
			}
			
		}
		}
	for(i=0;i<10;i++)
	{
		printf("%10d",i,number[i]);
	}
	return 0;
 } 

