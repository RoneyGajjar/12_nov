#include<iostream>
using namespace std;
class Student
{
	private :
		int id;
		string name;
	public:
		void set(int i, string s)
		{
			id = i;
			name = s; 
		}	
		void get()
		{
			cout<<"\nID = "<<id;
			cout<<"\nName = "<<name;
		}
};
int main()
{
	Student s1;
	s1.set(101,"Roney");
	Student s2;
	s2.set(102,"Roney");
	Student s3;
	s3.set(103,"Roney");
	
	s1.get();
	s2.get();
	s3.get();
	return 0;
}
