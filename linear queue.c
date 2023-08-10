#include<stdio.h>
# define MAX 5
int front = -1,rear = -1;
int queue[MAX];
void insert()
{
	int x;
	if(rear == MAX-1)
		printf("queue is overflowed\n");
	else
		{
			if(front == -1 && rear == -1)
			{
				front = 0; 
				rear = 0;
			}
			else
			{
				rear = rear+1;
			}
			printf("enter the element for queue:");
			scanf("%d",&x);
			queue[rear] = x;
		}
}
int del()
{
	int y;
	if(front == -1 && rear == -1)
	{
		printf("queue is underflowed\n");
		printf("the front position is%d\n",front);
	}
	else
	{
		y = queue[front];
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front = front+1;
			return y;
		}
	printf("The deleted item is %d\n",y);
	}
}
void display()
{
	int i;
	if(front == -1)
		printf("the queue is empty\n");
	else
	{
		printf("Your inserted elements are:\n");
		for(i=front;i<=rear;i++)
			printf("| %d",queue[i]);
		printf("\n");
		for(i=front;i<=rear;i++){
			if(i==front){
				printf("| F^");
			}
			if(front==rear){
				printf("R^");
			}
			if(i==rear){
			printf("| R^");
			}
		}
	
	
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.insert\n2.delete\n3.display\n4.Quit\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
		}
	}
}
