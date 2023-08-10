#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *new_node,*temp;
struct node *start=NULL;
struct node *end=NULL;
void insert_at_end()
{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data for node: ");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start== NULL)
	{
		start=end=new_node;
	}
	else
	{
		end->next=new_node;
		new_node->prev=end;
		end=new_node;
	}
}
void create_list()
{
	char c='y';
	while(c=='y'||c=='Y')
	{
		insert_at_end();
		printf("\nWant to create another node: \t");
		scanf(" %c",&c);
	}
}
void display_list()
{
	temp =start;
	while(temp!=NULL)
	{
		printf(" %d ----> ",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	int n;
	while(1)
	{
		printf("1.Create List.\n");
		printf("2.Insert At Front.\n");
		printf("3.Insert At End.\n");
		printf("4.Insert After Given Value.\n");
		printf("5.Insert After Given Position.\n");
		printf("6.Delete From Front.\n");
		printf("7.Delete From End.\n");
		printf("8.Delete After Given Value.\n");
		printf("9.Delete After Given Position.\n");
		printf("10.Reverse List.\n");
		printf("11.Display List\n");
		printf("12.Exit\n");
		printf("\nEnter Choice:\t");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				create_list();
				break;
			case 2:
			//	insert_at_front();
				break;
			case 3:
				insert_at_end();
				break;
		/*	case 4:
				insert_after_given_value();
				break;
			case 5:
				insert_after_given_position();
				break;
			case 6:
				delete_from_front();
				break;
			case 7:
				delete_from_end();
				break;
			case 8:
				delete_after_given_value();
				break;
			case 9:
				delete_after_given_position();
				break;
			case 10:
				reverse_list();
				break;*/
			case 11:
				display_list();
				break;
			case 5:
				exit(0);
		}
	}
	
}
