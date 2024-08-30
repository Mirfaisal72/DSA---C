#include<iostream>
using namespace std;
int main()
{
	int size,smallest;
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element: ";
		cin>>arr[i];
	}
	for(int i=0;i<0;i++)
	{
		if(smallest>arr[i])
		smallest=arr[i];
		
}
cout<<"The smallest number in the array is : "<<smallest;
}

