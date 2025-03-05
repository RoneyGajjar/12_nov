//Write a c++ program to swap values of 2 variables using third variable.
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"\nEnter the value of a = ";
	cin>>a;
	cout<<"\nEnter the value of b = ";
	cin>>b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	
	return 0;
}
