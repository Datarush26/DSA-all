#include<stdio.h>
#include<conio.h>


int main()
{
	int a[100],i,pos=0,n,item;
	printf("HOW MANY ELEMENT YOU WANT IN ARRAY :");
		scanf("%d",&n);
	printf("ENTER THE ELEMENTS OF ARRAY :");
	for	(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("ENTER THE ELEMENT TO BE SEARCHED:");
		scanf("%d",&item);
	for (i=0;i<n;i++)
	{
		if (a[i]== item)
		{	
			pos=i+1;
			break;
		}
	}
	
		if (pos>0)
			printf("search sucessfull,the item is found at index %d",pos);
		else
			printf("search unsucessfull");
}



