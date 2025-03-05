#include<stdio.h>
int main()
{
	
	char ch;
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n%c is a Vowel",ch);
	}
	
	else 
	{
		printf("\n%c is a consonent",ch);
	}
	
	return 0;
	
}
