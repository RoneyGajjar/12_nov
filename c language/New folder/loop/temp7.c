#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the value = ");
	scanf("%d",&start);
	printf("\nEnter the value = ");
	scanf("%d",&end);
		
	for(i=start;i<=end;i++)
	{
		printf("\n\t%d",i);
	}
	return 0;
}
