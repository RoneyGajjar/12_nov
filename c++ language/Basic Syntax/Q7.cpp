#include<iostream>
using namespace std;
int main()
{
	int roll,maths,english,science;
	string name;
	
	cout<<"\nEnter your roll no. = ";
	cin>>roll;
	cout<<"\nEnter your name = ";
	cin>>name;
	cout<<"\nEnter the marks of maths = ";
	cin>>maths;
	cout<<"\nEnter the marks of english = ";
	cin>>english;
	cout<<"\nEnter the marks of science = ";
	cin>>science;
	
	
	cout<<"\nRoll no. = "<<roll;
	cout<<"\nName = "<<name;
	int total = maths + english + science;
	cout<<"\nTotal marks = "<<total;
	cout<<"\nPercentage = "<<(double)total/(double)3;
	double per = (double)total/(double)3;
	
	if(per>=1 && per<45)
	{
		cout<<"\nGrade = C";
	}
	else if(per>=45 && per<80)
	{
		cout<<"\nGrade = B";
	}
	else
	{
		cout<<"\nGrade = A";
	}
	
	return 0;
}
