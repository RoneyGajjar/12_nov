#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the value of ch =");
	scanf(" %c",&ch);
	
	if (ch>='A' && ch<='Z')
	{
		printf("\n%c is in Capital Case",ch);
	}
	else if (ch>='a' && ch<='z')
	{
		printf("\n%c is in Lower Case",ch);
	}
	else 
	{
		printf("\n%c is not an Alphabet",ch);
	}
	
	return 0;
}
