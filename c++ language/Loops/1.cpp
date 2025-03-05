/*
Write a program in C++ to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<iostream>
using namespace std;
int main()
{
	int i,n,table;
	cout<<"Enter the value = ";
	cin>>n;
	
	cout<<"\nTable = ";
	
	for(i=1;i<=10;i++)
	{
		table = n * i;
		cout<<"\n"<<n<<" * "<<i<<" = "<<table;
	}
	return 0;
}
