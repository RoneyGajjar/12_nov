#include<iostream>
using namespace std;
int main()
{
	int row,i,j,k;
	cout<<"\nEnter the value of row = ";
	cin>>row;
	int spc = row-1;
	int star = row - 1;

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=spc;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		spc--;
		cout<<"\n";
	}
	for(i=1;i<=row-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=star;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		star--;
	}
	return 0;
}
