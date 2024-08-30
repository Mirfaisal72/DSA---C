#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int a[n];
	int item;
	int index;
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter: ";
		cin>>a[i];
	}
	cout<<"Enter the item to insert: ";
	cin>>item;
	
	cout<<"Enter the index to insert: ";
	cin>>index;
	
	
    for(int i=0;i<5;i++)
    {
    	if(index==i)
	{
    a[i]=item;
    break;
    }
}
    
	for(int i=0;i<5;i++)
	{
		cout<<"The element is : "<<a[i]<<endl;
	}
	
	
}
