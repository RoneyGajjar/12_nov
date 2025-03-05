#include<stdio.h>
int main()
{
	int size,i,j,k;
	int a[100][100],b[100][100],ans[100][100];
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	
	//Matrix 1.
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nElement in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix 1 := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	//Matrix 2.
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nElement in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix 2 := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	//Result
	printf("\nMultiplication is := \n");	
	for(i=0;i<size;i++)  
	{
		for(j=0;j<size;j++)
		{
			ans[i][j] = 0;
			for(k=0;k<size;k++)
			{
				ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
