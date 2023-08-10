#include<stdio.h>
 
void TOH(int,char,char,char);
 
int main()
{
  int n;
  printf("Enter the number of plates:");
  scanf("%d",&n);
  TOH(n,'A','C','B');
}
 
void TOH(int n,char x,char y,char z)
{
  if(n>0)
  {
     TOH(n-1,x,z,y);
     printf("Disk %d moved from rod %c to rod %c\n",n,x,y);
     TOH(n-1,z,y,x);
  }
} 
/*#include<stdio.h>
#define MAX 3
int cqueue[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
   if((front == 0 && rear == MAX-1) || (front == rear+1))
   {
      printf("Queue Overflow \n");
      return;
   }
   if (front == -1)  
   {
     front = 0;
	 rear = 0;
   }
   else
   {
      if(rear == MAX-1) 
	     rear = 0;
	  else
	     rear = rear+1;
   }
   cqueue[rear] = item ;
}
void del()
{
   if (front == -1 && rear==-1)
   {
      printf("Queue Underflow\n");
      return ;
   }
   printf("Element deleted from queue is : %d\n",cqueue[front]);
   
if(front == rear) 
   {
     front = -1;
     rear=-1;
   }
   else
   {
     if(front == MAX-1)
     front = 0;
     else
     front = front+1;
   }
}
void display()
{
  int i;
  if(front == -1 && rear==-1)
  {
     printf("Queue is empty\n");
	 return;
  }
  printf("Queue elements :\n");
  if( front <= rear )
     for(i=front; i<=rear; i++)
     {
        printf("%d ",cqueue[i]);
     }
  else
  {
     for(i =front; i<=MAX-1; i++)
        printf("%d ",cqueue[i]);
	 for(i=0; i<=rear; i++)
	    printf("%d", cqueue[i]);
  }
  printf("\n");
}


int main()
{
  int choice,item;
  do
  {
    printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1 :
	    printf("Input the element for insertion in queue : ");
		scanf("%d", &item);
		insert(item);
	    break;
      case 2 :
	    del();
		break;
      case 3:
	    display();
		break;
      case 4:
	    break;
      default:
	    printf("Wrong choice\n");
    }
  }while(choice!=4);
  return 0;
}
*/
