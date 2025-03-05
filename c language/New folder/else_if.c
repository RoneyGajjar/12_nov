#include<stdio.h>
int main()
{
	
	int num,count=0,sum=0,min=32767,max=0;
	float avg;
	
	up:
	
	printf("\nEnter any positive number to continue and -1 to exit := ");
	scanf("%d",&num);
	
	if(num!=-1)
	{
		if(num>0)
		{
			if(num<min)
			{
				min = num;
			}
			if(num>max)
			{
				max = num;
			}
			count++;
			sum = sum + num;
		}
		else
		{
			printf("\nPlease enter positive numbers only!");
		}
	}
	if(num==-1)
	{
		goto down;
	}
	
	goto up;
	
	down:
	
	printf("\nSum = %d",sum);
	printf("\nAverage = %.2f",(float)sum/(float)count);
	printf("\nCount = %d",count);
	printf("\nMinimun = %d",min);
	printf("\nMaximun = %d",max);
	
	return 0;

}

