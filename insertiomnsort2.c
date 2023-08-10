#include<stdio.h>
int main ()
{
	int a[10];
	int i,n,temp,j;
	printf(" enter the no of element :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("before sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=j-1;
		while(j>0 &&  a[j]>temp)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
	}
	for(i=0;i<n;i++)
		printf("\n%d\t",a[i]);
}
