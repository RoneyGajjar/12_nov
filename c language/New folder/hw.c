//Write a c program to take positive numbers from the user untill user enteres -1 and display sum, average, minimum and maximum and count of all numbers.
#include<stdio.h>
int main()
{
	int num,sum,count=0,min,max;
	float avg;
	up :
	printf("\nEnter positive num to continue or -1 to exit =");
	scanf("%d",&num);
	
	
	if(num < -1)
	{
		printf("\nPlease enter positive number only!");
		goto up;
	}
	else if (num >=0)
	{
		count++;
		avg = sum/count;
		sum = num + sum;
		goto up;
	}
    else if(num == -1)
	{ 
		goto down;
	}
	else 
	{
		goto up;
	}
		down :
		printf("\nSum =%d",sum);
		printf("\nAverage =%.2f",avg);
		printf("\nMinimum =%d",min);
		printf("\nMaximum =%d",max);
		printf("\nCount =%d",count);
		
	return 0;
	
}
