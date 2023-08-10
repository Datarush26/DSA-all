#include<stdio.h>
#include<stdlib.h>
int a[10], pos, elem, min, max, i;
int n = 0;
void create();
void display();
void insert();
void del();
void min_max();
int main()
{
  int choice;
  
  
     printf("\nMENU\n=>1. Create an array of N integers\n=>2. Display the array elements\n=>3. Insert Element at a given Position\n=>4. Delete an element at a given Position\n=>5. Check minimum and maximum element\n=>6. Exit");
	
	while(1)
	{
		printf("\nEnter your choice: ");
		 scanf("%d", &choice);
	 switch(choice)
	 {
        case 1: create();
		     break;
		case 2: display();
		     break;
		case 3: insert();
		     break;
	    case 4: del();
		     break;
		case 5: min_max();
		     break;    
		case 6: exit(1);
		     break;
	    default:printf("\nPlease enter a valid choice:");
	 }
  }
}
void create()
{
    int i;
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	printf("\nEnter the elements: ");
	for(i=0; i<n; i++)
	{
	    scanf("%d", &a[i]);
    }
}
void display()
{
  int i;
  if(n == 0)
  {
     printf("\nNo elements to display");
	 return;
  }
  printf("\nArray elements are: ");
  for(i=0; i<n;i++)
     printf("%d\t ", a[i]);
}
void insert()
{
   int i;
   if(n == 5)
   {
     printf("\nArray is full. Insertion is not possible");
	 return;
   }
   do
   {
     printf("\nEnter a valid position where element to be inserted: ");
	 scanf("%d", &pos);
   }while(pos > n);
   printf("\nEnter the value to be inserted:   ");
   scanf("%d", &elem);
   for(i=n-1; i>=pos ; i--)
   {
     a[i+1] = a[i];
   }
   a[pos] = elem;
   n = n+1;
   display();
}
void del()
{
  int i;
  if(n == 0)
  {
     printf("\nArray is empty and no elements to delete");
	 return;
  }
  do
  {
     printf("\nEnter the position to delete element: ");
	 scanf("%d", &pos);
  }while(pos>=n);
  elem = a[pos];
  printf("\nDeleted element is : %d \n", elem);
  for( i = pos; i< n-1; i++)
  {
     a[i] = a[i+1];
  }
  n = n-1;
  display();
} 
void min_max()
{
	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
}
