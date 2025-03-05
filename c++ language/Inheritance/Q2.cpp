//MultiLevel Inheritence
#include<iostream>
using namespace std;
class Parent
{
	public :
		void display1()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent
{
	public :
		void display2()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{	
};
int main()
{
	GrandChild gc;
	gc.display1();
	gc.display2();
	return 0;
}
