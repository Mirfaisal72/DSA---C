#include<iostream>

using namespace std;

int main()
{
	int n=5;
	int a[n];
	int item;
	int index;
	
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter the array element : ";
		cin>>a[i];
	}
	cout<<"Enter the item to delete: ";
	cin>>item;
	
	for(int i=0;i<=4;i++)
	{
		if(item == a[i])
		{
			index=i;
		    break;
		}
    }
		for(int i=index;i<5;i++)
		{
			a[i]=a[i+1];
		}		
		for(int i=0;i<4;i++)
	{
		cout<<"The element is : "<<a[i]<<endl;
	
	}
}
