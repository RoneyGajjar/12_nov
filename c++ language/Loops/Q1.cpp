#include<iostream>
using namespace std;
int main()
{
	int i,n,table;
	cout<<"\nEnter the value = ";
	cin>>n;
	
	cout<<"\nTable = ";
	for(i=1;i<=10;i++)
	{
		
		table = n * i;
		cout<<"\n"<<n<<" * "<<i<<" = "<<table;
	}
	
	return 0;
}
