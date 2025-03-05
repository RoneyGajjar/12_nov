#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 =");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
	
	printf("\nEnter the value of num1 =");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	printf("\nThe Subtraction of %d and %d is %d",num1,num2,num1-num2);
	
	printf("\nEnter the value of num1 =");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	printf("\nThe Multiplication of %d and %d is %d",num1,num2,num1*num2);
	
	printf("\nEnter the value of num1 =");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	printf("\nThe Division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
	
	printf("\nEnter the value of num1 =");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	printf("\nThe Remainder of %d and %d is %d",num1,num2,num1%num2);
	
	return 0;
}
