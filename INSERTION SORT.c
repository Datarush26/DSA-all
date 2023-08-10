//INSERTION SORT
#include<stdio.h>
int main()
{
	int arr[50];
	int n,i,j,k,temp;
	printf("enter how many element you want to insert into array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("the unsorted array is\n");
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\nthe sorted array is\n ");
	for(k=0;k<n;k++)
		printf("\t%d",arr[k]);
}
