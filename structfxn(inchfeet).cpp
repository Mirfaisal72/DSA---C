#include<iostream>
using namespace std;

struct distance
{
	int inches;
	int feet;
};

void disp(distance dd)
{
	cout<<dd.feet;
	cout<<"hello";
	cout<<"dd.inches";
	cout<<"pookie";
	
}

int main()
{
	distance d1,d2;
	
	cout<<"Enter feets = "<<endl;
	cin>>d1.feet;
	
	cout<<"Enter inches = "<<endl;
	cin>>d1.inches;
	
		cout<<"Enter feets = "<<endl;
	cin>>d2.feet;
	
	cout<<"Enter inches = "<<endl;
	cin>>d2.inches;
	
	cout<<"d1= ";
	disp(d1);
	cout<<endl;
	cout<<"d2= ";
	disp(d2);
	
	return 0;
}



