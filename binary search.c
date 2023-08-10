#include<stdio.h>
int a[10];
int bs(int a[],int low,int high,int k)
{
	int mid,i;
	mid=low+high/2;
	if(low == high)
	{
		if(k==a[i])
		{
			return i;
		}
		return 0;
	}
	else
	{
		if(k==a[mid])
		{
			return mid;
		}
		else if(k<mid)
		{
			return bs(a,low,mid,k);
		}
		else
		{
			return bs(a,mid+1,high,k);
		}
	}
}
int main()
{
	int m,i,k,n;
	printf("enter the no of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d element: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&k);
	m=bs(a,0,n-1,k);
	if(m == -1){
		printf("Element not found");
		return 0;
	}
	else
		printf("element found id is : %d",m+1);
}
