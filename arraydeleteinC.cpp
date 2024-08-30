#include<stdio.h>
using namespace std;
int main()
{
	int item;
	int n=6;
	int arr[n];
	int index;
	
	
	
	for(int i=1;i<=n;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number you want to delete: ");
	scanf("%d",&item);
	
	for(int i=1;i<=n;i++)
	{
		if(item==arr[i])
		{
			index=i;
			break;
		}
	}
	for(int i=index;i<=n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
	
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
