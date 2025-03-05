#include<iostream>
using namespace std;
class Person
{
	private :
		int age;
		string name,country;
	public :
		void set(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		void get()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country;
		}
};
int main()
{
	int a;
	string n,c;
	Person p1;
	cout<<"\nEnter your name = ";
	cin>>n;
	cout<<"\nEnter your age = ";
	cin>>a;
	cout<<"\nEnter your country = ";
	cin>>c;
	p1.set(n,a,c);
	p1.get();
	
	return 0;
}
