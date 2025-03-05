#include<stdio.h>
int main()
{
	int i;
	printf("\nFor Loop :-");
	for(i=0;i<5;i++)
	{
		printf("\n\tHello");
	}
	
	
	printf("\nWhile Loop :-");
	i=0;
	while(i<5)
	{
		printf("\n\tHello");
		i++;
	}
	
	printf("\nDo While Loop :-");
	i=0;
	do
	{
		printf("\n\tHello");
		i++;
	}while(i<5);
	return 0;
}
