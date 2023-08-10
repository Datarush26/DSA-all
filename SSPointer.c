#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
void selectionsort(int *,int);
void InsertionSort(int *,int);
void MergeSort(int *,int, int);
void merge(int *,int,int,int);
void QuickSort(int *,int,int);
int partition(int *,int,int);
int main()
{
	int i;
	int arr[Maxsize];
    int ch,n;
    while(1) 
   {
       printf("\n Sort Menu ");
       printf("\n\n1.Selection Sort\n2.Insertion Sort\n3.Merge Sort\n4.Quick Sort");
       printf("\n\nEnter your choice(1-4):");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1: SelectionSort(arr,n);
           break;
         case 2: InsertionSort(arr,n);
           break;
         case 3: MergeSort(arr,0,n-1);
           break;
         case 4: QuickSort(arr,0,n-1);
           break;
         case 5: exit(0);
         default: printf("\nWrong Choice!!");
       }
   }
    printf("Enter no. of elements: \n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
return 0;
}
void SelectionSort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
} 
void InsertionSort(int *arr,int n) 
{
	int i,j,temp;     
	for(i=1;i<n;i++)
	{
		temp= *arr[i];
		j=i-1;
		while(j>=0 && *arr[j]>temp)
		{
			*arr[j+1]= *arr[j];
			j--;
		}
		*arr[j+1]=temp;
	}
}
void MergeSort(int *arr,int lb, int ub)
{
    int mid;
	if(lb < ub)
    {
        mid = (lb + ub) / 2;
        MergeSort(arr, lb, mid);
        MergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
 
void merge(int *arr,int lb,int mid,int ub)
{
    int i, j, k, B[50];
    i = lb;
    j = mid + 1;
    k = lb;
    while ((i <= mid) && (j <= ub))
    {
        if (*arr[i] <= *arr[j])
        {
            B[k++] = *arr[i++];
        }
        else
        {
            B[k++] = *arr[j++];
        }
    }
        while(j <= ub)
        {
            B[k++] = *arr[j++];
        }
        while(i <= mid)
        {
             B[k++] = *arr[i++];
        }
	for (i = lb; i <= ub; i++)
    {
        *arr[i] = B[i];
    }
}
void QuickSort(int *arr,int lb,int ub)
{
	if(lb<ub)
	{
		int loc= partition(*arr,lb,ub);
		QuickSort(*arr,lb,loc-1);
        QuickSort(*arr,loc+1,ub);
      
	}
}
int partition(int *arr,int lb,int ub)
{
   int i, j, pivot, temp;
      pivot=lb;
      i=lb;
      j=ub;
	  while(i<j)
	  {
         while(*arr[i]<= *arr[pivot] )
            i++;
         while(*arr[j]> *arr[pivot])
            j--;
         if(i<j)
		 {
            temp=*arr[i];
            *arr[i]=*arr[j];
            *arr[j]=temp;
         }
         else
         {
		   temp= *arr[pivot];
           *arr[pivot]=*arr[j];
           *arr[j]=temp;
         }
        return j;
      }
}

