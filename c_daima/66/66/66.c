#include <stdio.h>

void average(float *p,int n);
void score(float (*p)[4],int n);
int main()
{
	float score1[3][4]={{80,48,90,76},{94,57,84,100},{50,80,73,62}};
	average(*score1,12);
	score(score1,3);
}
void average(float *p,int n)
{
	int i;
	float sum=0,aver;
	for(i=0;i<n;i++)
	{
		sum+=p[i];
	}
	aver=sum/n;
	printf("%5.2f\n",aver);
}	
void score(float (*p)[4],int n)
{
	int i;
	printf("The score of no.%d are ;",n);
	for(i=0;i<4;i++)
	{
		printf("%0.2f     ",*(*(p+n-1)+i));
	}
}