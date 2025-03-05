#include<stdio.h>
int main()
{
	int a[100],size,i,sum=0;
	
	printf("\nEnter the size of Array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elemet of a[%d] = ",i);
		scanf("%d",&a[i]);
	} 
	
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nAddition of element in array is = ",sum);
	printf("\nAverage of elemet in array is = ",(float)sum/(float)size);
	
	return 0;
}
