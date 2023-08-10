#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;

	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++)
		a[i]=b[i];
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a, low,mid);
		mergesort(a, mid+1,high);
		merge(a, low,mid,high);
	}
}
int main()
{
	int a[50];
	int n,i;
	printf("enter how many element you want to insert :");
		scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("the unsorted array is\n");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	mergesort(a, 0,n-1);
	printf("\nthe sorted array is\n");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);

}
