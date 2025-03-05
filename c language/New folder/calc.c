#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Remainder");
	printf("\n6.Square root");
	printf("\n7.Power");
	printf("\n8.Square");
	printf("\n9.Cube");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d =%d",num1,num2,num1+num2);
		break;
		case 2 :
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			printf("\nThe Subtraction of %d and %d =%d",num1,num2,num1-num2);						
		break;
			
	}
	
	
	return 0;	
}
