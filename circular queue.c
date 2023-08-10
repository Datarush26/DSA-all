#include<stdio.h>
# define MAX 5
int front = -1,rear = -1;
int queue[MAX];
void insert()
{
	int x;
	if((front==0 && rear == MAX-1)|| (front== rear+1))
		printf("queue is overflowed\n");
	else
		{
			if(front == -1 && rear == -1)
			{
				front = 0; 
				rear = 0;
			}
			else if (rear== MAX-1)
				rear=0;
			else
				rear = rear+1;
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
		printf("the rear position is%d\n",rear);
	}
	else
	{
		y = queue[front];
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else if (front== MAX-1)
			front=0;
		else
		{
			front = front+1;
		//	return y;
		}
	printf("the deleted item is %d\n",y);
	}
}
void display()
{
	int i;
	if(front == -1)
	{
		printf("the queue is empty\n");
		return;
	}
	printf("Your inserted elements are:\n");
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
			printf("\t%d",queue[i]);
		printf("\nthe front position is%d\n",front);
		printf("the rear position is%d\n",rear);
	}
	else
	{
		for(i=front;i<=MAX-1;i++)
			printf("\t%d",queue[i]);
		for(i=0;i<=rear;i++)
			printf("\t%d",queue[i]);
		printf("\nthe front position is%d\n",front);
		printf("the rear position is%d\n",rear);
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
