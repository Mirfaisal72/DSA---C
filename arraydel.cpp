#include<iostream>

using namespace std;

int main()
{
	int n=5;
	int a[n];
	int item;
	int array_index;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the array element : ";
		cin>>a[i];
	}
	cout<<"Enter the item to delete: ";
	cin>>item;
	
	for(int i=0;i<5;i++)
	{
		if(item==a[i])
		{
			array_index=i;
			break;
		}
	}
	for(int i=array_index;i<4;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	for(int i=0;i<4;i++)
	{
		cout<<"The element is : "<<a[i]<<endl;
	}
}
