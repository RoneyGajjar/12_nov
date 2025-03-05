//Multiple Inheritence
#include<iostream>
using namespace std;
class Father
{
	public :
		void display1()
		{
			cout<<"\nHello from Father class";
		}
};
class Mother 
{
	public :
		void display2()
		{
			cout<<"\nHello from Mother class";
		}
};
class Child : public Child
{	
};
int main()
{
	GrandChild gc;
	gc.display1();
	gc.display2();
	return 0;
}
