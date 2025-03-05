//Write a C++ program to accept the height of a person in centimeters and categorize the person according to their height.if height is less than 150 than display dwarf, if height is 150 or more than display that he is average heighted, if height is more than 200 than display taller
#include<iostream>
using namespace std;
int main()
{
	int h;
	cout<<"\nPlease enter your height in Centimeter = ";
	cin>>h;
	if(h<150)
	{
		cout<<"\nDwarf";
	}
	else if (h>=150 && h<=200)
	{
		cout<<"\nAverage Heighted";
	}	
	else
	{
		cout<<"\nTaller";
	}
	return 0;
}
