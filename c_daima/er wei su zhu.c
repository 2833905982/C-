#include <stdio.h>

int main()
{
	int size=3;
	int board[size][size];
	int i=0,j;
	int numofx;
	int numofo;
	int result = -1;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&board[i][j]);

		}
	}
	for(i=0;i<size;i++)          //����е���� 
	{
		numofo=numofx=0;
		for(j=0;j<size;j++)
		{
			if(board[i][j]==1)
			{
				numofx ++;
			}
			else{
				numofo ++;
			}
		}
	}
	if(numofx==size)
	{
		result=0;
	}
	else if(numofo==size)
	{
		result=1;
	}
	for(j=0;j<size;j++)        //����е���� 
	{
		for(i=0;i<size;i++)
		{
			if(board[i][j]=0)
			{
				numofx ++;
			}
			else 
			{
				numofx ++;
			}
			if(numofx==size)
		{
			result=0;
		}
		else if(numofo==size)
		{
			result=1;
				}
			}
	}

			for(i=0;i<size;i++){         //���б�Խ��ߵ���� 
				for(j=0;j<size-i-j;j++);
			}
				if(board[i][j]=0)
			{
				numofx ++;
			}
			else 
			{
				numofx ++;
			}
			if(numofx==size)
		{
			result=0;
		}
		else if(numofo==size)
		{
			result=1;
				}
			 //���Խ��ߵ���� 
		for(i=0;i<size;i++){     
		if(board[i][j]==0)
		{
			numofo ++;
		}else{
			numofx ++;
		}
	if(numofo == size)
	{
		result = 0;
	}
	else if (numofx == size)
	{
		result = 1;
	}
	if(result = 1)
	{
		printf("0 win the game.");
	}
	else{
		printf("1 win the game.");
	}
	return 0;
  } 
  }
