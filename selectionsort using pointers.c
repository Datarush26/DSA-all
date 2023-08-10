#include<stdio.h>
#define Maxsize 10
void s_sort(int *,int n);
int i=0,j=0,k=0,temp;
int main()
{
	int a[Maxsize],n,s;
	printf("\n 1.Enter the Array \n 2.Selection Sort \n 3.Insertion sort \n 4.Merge sort\n 5.Quick sort \n 6.Diplay the array \n 7.Exit");
	while(1)
	{
	 	printf("\n Enter your choice : ");
	 	scanf("%d",&s);
	 	switch(s)
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
	 			s_sort( a,n);	 			
				break;				 			
	 			
	 		case 3:
	 			return 0;

		 }
	 }
	 return 0;
}
void s_sort(int *ptr,int n)
{
	int i,j,k,temp;
		for(i=0;i<n-1;i++)
		{
			int min=*(ptr+i);
			k=i;
			for(j=i+1;j<n;j++)
			{
				if((min)>*(ptr+j))
					min=*(ptr+j);
					k=j;
			printf("\n%u\n",(ptr+j));
			}
			if(i != k)
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+k);
				*(ptr+k)=temp;
			}
		}
}
