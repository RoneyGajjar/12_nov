#include<stdio.h>
int main()
{
	
	int num,count=0,i;
	printf("\nEnter the number to check wether it's a prime number or not = ");
	scanf("%d",&num);	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
		
	}
	if(count==0)
	{
		printf("\n%d is the prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
