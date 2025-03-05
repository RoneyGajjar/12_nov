#include<stdio.h>
int main()
{
	int up,end,choice,num1,num2;
	up:
	printf("\nMenu");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Remainder");
	printf("\n6.Exit");
	printf("\nPlease enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	
	{
	
		case 1 :
		printf("\nAdditon");	
		printf("\nEnter the value of num1 = ");
		scanf("%d",&num1);
		printf("\nEnter the value of num2 = ");
		scanf("%d",&num2);
		printf("\nAdditon of %d and %d is = %d",num1,num2,num1+num2);	
		break;
		
		case 2 :
		printf("\nSubtraction");
		printf("\nEnter the value of num1 = ");
		scanf("%d",&num1);
		printf("\nEnter the value of num2 = ");
		scanf("%d",&num2);
		printf("\nsubtraction of %d and %d is = %d",num1,num2,num1-num2);	
		break ;
	
		case 3 :
		printf("Multiplication");
		printf("\nEnter the value of num1 = ");
		scanf("%d",&num1);
		printf("\nEnter the value of num2 = ");
		scanf("%d",&num2);
		printf("\nmultiplication of %d and %d is = %d",num1,num2,num1*num2);	
		break ;
	
		case 4 :
		printf("\nDivision");
		printf("\nEnter the value of num1 = ");
		scanf("%d",&num1);
		printf("\nEnter the value of num2 = ");
		scanf("%d",&num2);
		printf("\nDivision of %d and %d is = %.2f",num1,num2,(float)num1/(float)num2);	
		break;
	
		case 5 :
		printf("\nRemiander");
		printf("\nEnter the value of num1 = ");
		scanf("%d",&num1);
		printf("\nEnter the value of num2 = ");
		scanf("%d",&num2);
		printf("\nRemainder of %d and %d is = %d",num1,num2,num1%num2);	
		break;

		case 6 :
		printf("\nThank you!");
		goto end;
		break;
	}
	
	goto up;
	end:
	return 0;

}
