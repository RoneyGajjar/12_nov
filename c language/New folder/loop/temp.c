#include<stdio.h>
int main()
{
	
	int start,end,i;
	printf("\nEnter the value of start = ");
	scanf("%d",&start);
	printf("\nEnter the value of end = ");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		printf("\n\t%d",i);
	}
	return 0;
}
