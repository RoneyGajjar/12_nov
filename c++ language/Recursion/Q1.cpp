#include<iostream>
using namespace std;
void display(int num)
{
	if(num!=0)
	{
		cout<<"\nHello World!";
		display(num - 1);
	}
}

int main()
{
	int num;
	cout<<"Enter the count = ";
	cin>>num;
	display(num);
	return 0;
}
