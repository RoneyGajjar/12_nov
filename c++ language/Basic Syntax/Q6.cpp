#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter the value of x = ";
	cin>>x;
	cout<<"\nEnter the value of y = ";
	cin>>y;
	
	if(x==0 && y==0)
	{
		cout<<"\nThis is on origin point";
	}
	else if (x>0 && y>0)
	{
		cout<<"\nThe cordinate point ("<<x<<","<<y<<") lies in the first quadrant";
	}
	else if (x<0 && y>0)
	{
		cout<<"\nThe cordinate point ("<<x<<","<<y<<") lies in the second quadrant";
	}
	else if (x<0 && y<0)
	{
		cout<<"\nThe cordinate point ("<<x<<","<<y<<") lies in the third quadrant";
	}
	else
	{
		cout<<"\nThe cordinate point ("<<x<<","<<y<<") lies in the fourth quadrant";
	}
	return 0;
}
