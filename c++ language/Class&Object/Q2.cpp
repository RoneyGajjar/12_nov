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
	Student s1,s2,s3;
	cout<<"\nEnter your ID = ";
	cin>>s1.id;
	cout<<"\nEnter your Name = ";
	cin>>s1.name;
	
	cout<<"\nEnter your ID = ";
	cin>>s2.id;
	cout<<"\nEnter your Name = ";
	cin>>s2.name;
	
	cout<<"\nEnter your ID = ";
	cin>>s3.id;
	cout<<"\nEnter your Name = ";
	cin>>s3.name;
	
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name;	
	cout<<"\nId = "<<s2.id;
	cout<<"\nName = "<<s2.name;	
	cout<<"\nId = "<<s3.id;
	cout<<"\nName = "<<s3.name;	
	
	return 0;
}
