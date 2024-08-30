#include<iostream>
using namespace std;

int main()
{
	int a[5];
	for(int i =0;i<=4;i++)
	{
		cout<<"Enter the number : ";
		cin>>a[i];
		
	}
	int product=1;
	
	for(int i=0;i<=4;i++)
	{
		product= product * a[i];
	}
	cout<<product;
	
}
