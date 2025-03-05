//Simple Inheritance
#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from parent class";
		}	
};
class Child : public Parent
{
	
};
int main()
{
	Child c;
	c.display();
	return 0;
}
