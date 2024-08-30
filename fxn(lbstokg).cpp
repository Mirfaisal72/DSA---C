#include<iostream>

using namespace std;

float lbstokg(float);

int main()
{
	float lbs,kgs;
	cout<<"Enter the weight in pounds"<<endl;
	cin>>lbs;
	cout<<endl;
	kgs=lbstokg(lbs);
	cout<<"The weight in kilograms = "<<kgs;
	return 0;
}
float lbstokg(float pounds)
{
	int kg= 0.453592*pounds;
	return kg;
}
