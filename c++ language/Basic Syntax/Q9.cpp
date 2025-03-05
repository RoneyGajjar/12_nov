#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter the value of ch = ";
	cin>>ch;
	
	if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"\nThis is an alphabet";
	}
	else if(ch>= '0' && ch <= '9')
	{
		cout<<"\nThis is a Digit";
	}
	else
	{
		cout<<"\nSpecial Charater";
	}
	
	return 0;
	
}
