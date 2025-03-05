#include<stdio.h>
int main()
{
	int age;
	printf("\nPlease Enter your age = ");
	scanf("%d",&age);
	
	switch(age>18)
	{
		case 1 :
			printf("\nYour age is %d\nYou are eligible for voting",age);
		break;
		case 0 :
			printf("\nYour age is %d\nYou are not eligible for voting",age);
		break;
	}
	
	return 0;
}
