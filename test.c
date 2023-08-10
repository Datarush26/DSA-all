#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20],x,j,i;
	printf("enter how many no you want to insert :");
	scanf("%d",&x);
	for(i=0;i<x;i++)
		scanf("%d",&arr[i]);
	int min=arr[0];
	for(j=j+1;j<x;j++)
	{
		if(min>arr[j])
			min=arr[j];
	}
	
	printf("\nthe minimum is %d",min);
}
