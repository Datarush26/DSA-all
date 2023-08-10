#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
int i=0,j=0,k=0,temp;
void seletionsort(int *ptr,int n)
{
    printf("\n'SELECTION SORT DONE'\n");
	int min;
	for(i=0;i<n-1;i++)
	{
		min=*(ptr+i);
		k=i;		
		for(j=i+1;j<n;j++)
		{
			if(min>*(ptr+j))
			{
				min=*(ptr+j);
				k=j;
			}	
		}
		if(i!=k)
		{
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+k);
			*(ptr+k)=temp;
		}
	}
}
void insertionsort(int *ptr,int n)
{
	
    printf("\n'INSERTION SORT DONE'\n");
	for(i=1;i<=n-1;i++)
	{
		temp=*(ptr+i);		
		for(j=i-1;j>=0 && *(ptr+j)>temp;j--)
			*(ptr+(j+1))=*(ptr+j);
		*(ptr+(j+1))=temp;
	}
}
void merge(int *ptr,int low,int mid,int high)
{
    int b[Maxsize];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
	{
       if(*(ptr+i)<*(ptr+j))
       {
           *(b+k)=*(ptr+i);
			i++;
			k++;
		}
       else
       {
			*(b+k)=*(ptr+j);
			j++;
			k++;
		}
    }
	while(i<=mid)
	{
		*(b+k)=*(ptr+i);
		i++;
		k++;
	}
    while(j<=high)
	{
		*(b+k)=*(ptr+j);
		k++;
		j++;
	}
	for(k=low;k<=high;k++)
	{
	}
		*(ptr+k)=*(b+k);
}
void merge_sort(int *ptr,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=((low+high)/2);
        merge_sort(ptr,low,mid);
        merge_sort(ptr,mid+1,high);
        merge(ptr,low,mid,high);
    }
}
int partition(int *ptr,int p,int r)
{
    k=*(ptr+p);
    i=p;
    j=r;
    while(i<j)
	{
	    while(*(ptr+i)<=k)
	        i++;
        while(*(ptr+j)>k)
            j--;
        if(i<j)
        {
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }
	}
    *(ptr+p)=*(ptr+j);
    *(ptr+j)=k; 
    return j;
}
void quicksort(int *ptr,int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(ptr,p,r);
        quicksort(ptr,p,q-1);
        quicksort(ptr,q+1,r);
    }
}
int main()
{
	int a[Maxsize],n,ch;
	printf("\n 1.Enter the Array \n 2.Selection Sort \n 3.Insertion sort \n 4.Merge sort\n 5.Quick sort \n 6.Diplay the array \n 7.Exit");
	while(1)
	{
	 	printf("\n Enter your choice : ");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1:
	 			printf("\n Enter the Number of Elements : ");
				scanf("%d",&n);
				printf("\n Enter the numbers :\n");
				for(i=0;i<n;i++)
					scanf("%d",&a[i]);
				printf("\n Unsorted array elements are\n");
				for(i=0;i<n;i++)
					printf("\t%d",*(a+i));
	 			break;
	 		case 2 :
	 			seletionsort(a,n);	 			
				break;				 			
	 		case 3 :
	 			insertionsort(a,n);
	 			break;
	 		case 4:
	 		    merge_sort(a,0,n-1);
				printf("\n'Merge Sort Done'\n");	
				break;
			case 5:
			    printf("\n'Quick Sort'\n");
			    quicksort(a,0,n-1);	
	 			break;
	 		case 6:
				printf("\n Sorted array elements are\n");
	 			for(i=0;i<n;i++)
	 				printf("\t%d",*(a+i));
	 			break;		
	 		case 7:
	 			return 0;

		 }
	 }
	
}
