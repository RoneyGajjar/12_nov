#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the index number = ";
	cin>>index;
	if(index<size && index>=0)
	{
		cout<<"\nElement on "<<index<<" is = "<<a[index];
	}
	else
	{
		cout<<"\nInvalid Index Number";
	}
	
	return 0;
}
