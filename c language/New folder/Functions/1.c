#include<stdio.h>
//with return type with argument
int add(int a,int b);

int main()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = add(num1,num2);
	printf("\nAddition of %d and %d is = %d ",num1,num2,ans);
	return 0;
}
int add(int a,int b)
{
	int ans;
	ans = a + b;
	return  ans;
}

