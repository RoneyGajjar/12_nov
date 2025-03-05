#include<stdio.h>
int main()
{
	int num1 = 30, num2 = 55, num3 = 65;
	long int ln1 = 54812, ln2 = 45874 , ln3 = 68745;
	float f1 = 45.65 , f2 =45.985 , f3 = 45.789;
	char ch1 = '@', ch2 = 'A', ch3 = '5';
	
	printf("Integer data type :-");
	printf("\nValue of num1 = %d",num1);
	printf("\nValue of num2 = %d",num2);
	printf("\nValue of num3 = %d",num3);
	
	printf("\nLong Integer data type :-");
	printf("\nValue of ln1 = %ld",ln1);
	printf("\nValue of ln2 = %ld",ln2);
	printf("\nValue of ln3 = %ld",ln3);
	
	printf("\nFloat dat type :-");
	printf("\nValue of f1 = %.1f",f1);
	printf("\nValue of f1 = %.2f",f2);
	printf("\nValue of f1 = %.3f",f3);
	
	printf("\nCharacter dat type :-");
	printf("\nValue of ch1 = %c",ch1);
	printf("\nValue of ch2 = %c",ch2);
	printf("\nValue of ch3 = %c",ch3);
	
	return 0;
}
