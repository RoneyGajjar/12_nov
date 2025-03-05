#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()
		{
			cout<<"\n Object Created";
		}
		~Demo()
		{
			cout<<"\n Object Destroyed";
		}
};
int main()
{
	Demo d1,d2,d3;
	return 0;
}
