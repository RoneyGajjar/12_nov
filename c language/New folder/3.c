#include<stdio.h>
int main()
{
	int num1,num2,num3;
	float f1,f2,f3;
	char ch1,ch2,ch3;
	
	printf("\nEnter the value of num1 :-");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 :-");
	scanf("%d",&num2);
	printf("\nEnter the value of num3 :-");
	scanf("%d",&num3);	
	
	printf("Integer data type :-");
	printf("\nValue of num1 = %d",num1);
	printf("\nValue of num2 = %d",num2);
	printf("\nValue of num3 = %d",num3);
	
	printf("\nEnter the value of f1 :-");
	scanf("%f",&f1);
	printf("\nEnter the value of f2 :-");
	scanf("%f",&f2);
	printf("\nEnter the value of f3 :-");
	scanf("%f",&f3);
	
	printf("\nFloat dat type :-");
	printf("\nValue of f1 = %.1f",f1);
	printf("\nValue of f1 = %.2f",f2);
	printf("\nValue of f1 = %.3f",f3);
	
	printf("\nEnter the value of ch1 :-");
	scanf(" %c",&ch1);
	printf("\nEnter the value of ch2 :-");
	scanf(" %c",&ch2);
	printf("\nEnter the value of ch3 :-");
	scanf(" %c",&ch3);
	
	printf("\nCharacter dat type :-");
	printf("\nValue of ch1 = %c",ch1);
	printf("\nValue of ch2 = %c",ch2);
	printf("\nValue of ch3 = %c",ch3);
	
	
	return 0;
}
