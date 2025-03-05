#include<iostream>
using namespace std;

class Student
{
	public:
		int id;
		string name;
};
int main()
{
	Student s1;
	s1.id = 10;
	s1.name = "Roney";
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name;	
	return 0;
}
