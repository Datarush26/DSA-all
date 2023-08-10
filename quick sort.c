#include<stdio.h>
#include<stdlib.h>
int partition(int q[],int p,int r)
{
	int i,j,x,temp;
	x= q[p];
	i=p;
	j=r;
	while(i<j)
	{
		while(q[i]<=x)
		{
			i++;
		}
		while(q[j]>x)
		{
			j--;
		}
		if(i<j)
		{
			temp=q[i];
			q[i]=q[j];
			q[j]=temp;
		}
	}
{
	q[p]=q[j];	
	q[j]=x;
	return j;
}
}
void quicksort(int q[],int p,int r)
{
	if(p<r)
	{
	int	k= partition(q,p,r);
		quicksort(q,p,k-1);
		quicksort(q,k+1,r);
	}
}
int main()
{
	int n,i;
	int q[50];
	printf("enter how many element you want to insert :");
		scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&q[i]);
	quicksort(q,0,n-1);
	printf("\nthe sorted array is\n");
	for(i=0;i<n;i++)
		printf("\n%d",q[i]);
}
