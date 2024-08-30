#include<stdio.h>

void delins(int arr[],value,size)
{
	for(int i=0;i<size;i++)
	{
		if(i==value)
		{
			for(j=i;j<size-1;j--)
			{
				a[j]=a[j+1];
			}
			j--;
			n--;
		}
	}
}

int main()
{
	int arr[];
	int value=2;
	int n=sizeof arr[]/sizeof arr[0];
	
	for(int i=0;i<size;i++)
	{
		printf(a[i]);
	}
}
