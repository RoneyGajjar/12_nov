#include<stdio.h>
int main()
{
	
	int i;
	for(i=1;i<=10;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		printf("\n%d",i);
	}
	
	return 0;
}
