#include<stdio.h>
int main()
{
	int arr[10];
	int n,i,j,k,temp;
	printf("enter how many element you want to insert :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("the unsorted array is");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
	for(i=0;i<n-1;i++)
		{
			int min=i;
			for(j=i+1;j<n;j++)
			{
				if(arr[min]>arr[j])
					min=arr[j];
					k=j;
			}
		if(i != k)
			{
			temp=arr[i];
			arr[i]=arr[k];
			arr[k]=temp;
			}
		
		}
		printf("\nthe sorted elements are\n");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
}
/*#include<stdio.h>
int main()
{
   int i, n,  m, low, high, mid, array[100];
   printf("Enter number of elements of the array:");
   scanf("%d",&n);
   printf("Enter the elements of the array:");
   for(i = 0; i < n; i++)
     scanf("%d",&array[i]);
   printf("Enter value to find:");
   scanf("%d", &m);
   low = 0;
   high = n - 1;
   while (low <= high) 
   {
   	  mid = (low+high)/2;
      if (array[mid] == m) 
	  {
           printf("%d found at location %d", m, mid+1);
           break;
      }
      else if(array[mid] < m)
         low = mid + 1;
      else
        high = mid - 1; 
   } 
   if(low > high)   
       printf("%d isn't present in the array", m);
       return 0;
}
*/
