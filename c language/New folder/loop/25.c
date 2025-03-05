#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	up :
	printf("\n---Menu---");
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Exit");

	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter First number = ");
			scanf("%d",&num1);
			printf("\nEnter second number = ");
			scanf("%d",&num2);
			printf("\nAddition = %d",num1+num2);
		break;
		case 2 :
			printf("\nEnter First number = ");
			scanf("%d",&num1);
			printf("\nEnter second number = ");
			scanf("%d",&num2);
			printf("\nSubtraction = %d",num1-num2);
		break;
		case 3 :
			printf("\nEnter First number = ");
			scanf("%d",&num1);
			printf("\nEnter second number = ");
			scanf("%d",&num2);
			printf("\nMultiplication = %d",num1*num2);
		break;
		case 4 :
			printf("\nEnter First number = ");
			scanf("%d",&num1);
			printf("\nEnter second number = ");
			scanf("%d",&num2);
			printf("\nDivision = %.2f",(float)num1/(float)num2);
		break;
		case 5 :
			printf("\nGoodbye");
			goto down;
			
		break;
		
		default : printf("\nInvalid input!");
		
	}
	goto up;
	down :
	return 0;
}
