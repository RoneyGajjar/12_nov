//Write a C++ program to find whether a given year is a leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Please enter year = ";
	cin>>year;
	
	if(year % 4 == 0) 
	{
		cout<<"\nIs a leap year";
	}
	else
	{
		cout<<"\nIs not a leap year";
	}
	
	return 0;
}
