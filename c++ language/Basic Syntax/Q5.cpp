#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"\nEnter your height = ";
	cin>>height;
	
	if(height<150)
	{
		cout<<"\nDwarf";
	}
	else if(height>=150 && height<=200)
	{
		cout<<"\nAverage Heighted";
	}
	else
	{
		cout<<"\nTaller";
	}
	
	return 0;
}
