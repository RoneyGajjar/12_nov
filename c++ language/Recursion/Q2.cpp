#include<iostream>
using namespace std;

int sum(int num)
{
	if(num!=0)
	{
		return num + sum(num - 1);
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int num;
	cout<<"Enter the number = ";
	cin>>num;
	int ans = sum(num);
	cout<<"\nAddition = "<<ans;
	return 0;
}
