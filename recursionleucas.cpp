#include<stdio.h>

int leucas(int num);

int main()
{
	int num=10;
	for(int i=1;i<=num;i++)
	{
		printf("%d\t",leucas(i));
	}
	return 0;
}
int leucas(int num)
{
	int n;
		if(num==2 || num==1 || num==3)
		{
			return 1;
		}
		else
		{
		   n=leucas(num-1)+leucas(num-2)+leucas(num-3);
		   return n;
           
		}
}
