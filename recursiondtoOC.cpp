#include<stdio.h>

void octal(int num);

int main()
{
	int num=224;
	octal(num);
}
void octal(int num)
{
	int n;
	if(num==0)
	{
		printf("0");
	}
	else
	{
		n=num%8;
		octal(num/8);
		printf("%d",n);
	}
}
