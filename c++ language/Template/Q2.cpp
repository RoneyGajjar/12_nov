#include<iostream>
using namespace std;
template <typename T , int size>
void sorting(T (&a)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i] > a[j])
			{
				T temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5]={12,52,53,75,1};
	cout<<"\nValue of array before swapping = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	sorting (a);
	
	cout<<"\nValue of array after swapping = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
