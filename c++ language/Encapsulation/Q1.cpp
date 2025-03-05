#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void set(double r)
		{
			radius = r;
		}
		void area()
		{
			cout<<"\nArea of circle = "<<3.14*(radius * radius);
		}
		void circumference()
		{
			cout<<"\nCircumfrence of circle is = "<<2*(3.14*radius);
		}
};
int main()
{
	int r;
	Circle c1;
	cout<<"\nEnter the value of radius = ";
	cin>>r;
	c1.set(r);
	c1.area();
	c1.circumference();
	
	return 0;
}
