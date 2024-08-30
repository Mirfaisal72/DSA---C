#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[n];
	for(int i=0;i<=n;i++)
	{
		cout<<"Enter the number: ";
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum= sum + a[i];
	}
	float avg;
	
	avg = sum/n;
	cout<<"The average of the numbers are : "<<avg;
}
