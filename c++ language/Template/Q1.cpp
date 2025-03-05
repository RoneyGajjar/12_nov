#include<iostream>
using namespace std;
template <typename T>
void swapping(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10,b = 20;
	
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	
	swapping(a,b);
	
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	
	return 0;
}
