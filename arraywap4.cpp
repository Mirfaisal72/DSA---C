#include<iostream>
using namespace std;

int main()
{
	int a[5];
	
	
	cout<<"Enter the element: "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			cout<<" { "<<a[i]<<" } ";
		}	
	}
}
