#include<stdio.h>
int main()
{
	int a[10],i,j,t,n;
	printf("enter how may element you want :\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	  printf("\nEnter the number:");
	  scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
	{
		if (a[i]>a[j])
		{
			t=a[i];
 		    a[i]=a[j];
 		    a[j]=t;	
		}
	  	
	}
	printf("\nArray after sorting is :");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	return 0 ;
}
