#include<iostream>
using namespace std;
int main()
{

int size,largest;

cout<<"Enter the size of the array : ";
cin>>size;
int arr[size];

for(int i=0;i<size;i++)
{
	cout<<"Enter the element : ";
	cin>>arr[i];
}



for(int i=0;i<=size;i++)
{
	if(largest < arr[i])
	largest=arr[i];
}
cout<<"The largest number in the Array is : "<<largest;

}
