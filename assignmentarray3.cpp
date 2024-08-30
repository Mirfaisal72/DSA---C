#include<iostream>            

using namespace std;

 
int main()
{
    int size, i, largest;
 
    cout<<"\n Enter the size of the array: ";
    cin>>size;
    int array[size];  //Declaring array
    //Input array elements
 
 
    for (i = 0; i < size; i++)
    {   
        cout<<"Enter the element: ";
        cin>>array[i];
    }
 
     //Declaring Largest element as the first element
    largest = array[0];
 
    for (i = 1; i < size; i++) 
    {
        if (largest < array[i])
        largest = array[i];
    }
 
    cout<<" largest element present in the given array is :"<<largest;
 
    return 0;
 }
