/*#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *new_node,*temp;
struct node *start=NULL;
void display_list();
void insert_at_end()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value :\t");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
	}
}
void create_list()
{
	char c='y';
	while(c=='y'||c=='Y')
	{
		insert_at_end();
		printf("\nWant to create another node?: \t");
		scanf(" %c",&c);
	}
}
void insert_at_front()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value :\t");
	scanf("%d",&new_node->data);
	new_node->next=start;
	start=new_node;
}
void insert_after_given_value()
{
	int val;
	printf("\nEnter value to be searched: \t");
	scanf("%d",&val);
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data ==val)
		{
			new_node=(struct node *)malloc(sizeof(struct node));
			printf("\nEnter value :\t");
			scanf("%d",&new_node->data);
			new_node->next=temp->next;
			temp->next=new_node;
			return;
		}
		temp=temp->next;
	}
	printf("\nValue isn't in the list.\n");
}
void insert_after_given_position()
{
	int c=count();
	int pos,i=1;
	printf("\nEnter Position:\t");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("\nPosition Out Of Range.\n");
	}
	else
	{
		temp=start;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter value :\t");
		scanf("%d",&new_node->data);
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void delete_from_front()
{
	if(start==NULL)
	{
		printf("\nList Empty....\n");
	}
	else
	{
		temp=start;
		start=temp->next;
	}
	free(temp);
}
void delete_from_end()
{
	if(start==NULL)
	{
		printf("\nList Empty....\n");
	}
	else
	{
		temp=start;
		struct node *second_last;
		while(temp->next!=NULL)
		{
			second_last=temp;
			temp=temp->next;
		}
		second_last->next=NULL;
	}
	free(temp);
}
void delete_after_given_value()
{
	int val;
	printf("\nEnter value to be searched: \t");
	scanf("%d",&val);
	temp=start;
	
	while(temp!=NULL)
	{
		
		if(temp->data == val)
		{
			
			temp->next=temp->next->next;
			return;
		}
		temp=temp->next;
	}
	printf("\nValue isn't in the list.\n");
	free(temp);
	
}
void delete_after_given_position()
{
	struct node* next_node;
	int c=count();
	int pos,i=1;
	printf("\nEnter Position:\t");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("\nPosition Out Of Range.\n");
	}
	else
	{
		temp=start;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		next_node=temp->next;
		temp->next=next_node->next;
		free(next_node);
	}
	printf("\nAfter deletion the list is:\n ");
	display_list();
		
}
void reverse_list()
{
	struct node *next,*prev=NULL;
	temp=start;
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
	start=prev;
	free(next);
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
int count()
{
	int c=1;
	temp=start;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
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
				insert_at_front();
				break;
			case 3:
				insert_at_end();
				break;
			case 4:
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
				break;
			case 11:
				display_list();
				break;
			case 12:
				exit(0);
		}
	}
	
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp;
struct node *start=NULL;
void create_list();
void insert_at_front();
void insert_at_end();
void insert_after_given_value();
void insert_after_given_position();
void delete_from_front();
void delete_from_end();
void delete_after_given_value();
void delete_after_given_position();
void reverse_list();
void display_list();
int count();
int main()
{
	int n;
	printf("i.Create List.\n");
	printf("ii.Insert At Front.\n");
	printf("iii.Insert At End.\n");
	printf("iv.Insert After Given Value.\n");
	printf("v.Insert After Given Position.\n");
	printf("vi.Delete From Front.\n");
	printf("vii.Delete From End.\n");
	printf("viii.Delete After Given Value.\n");
	printf("ix.Delete After Given Position.\n");
	printf("x.Reverse List.\n");
	printf("xi.Display List\n");
	printf("xii.Exit\n");
	while(1){
	printf("\nEnter Choice:\t");
			scanf("%d",&n);
		switch(n){
			case 1:
				create_list();
				break;
			case 2:
				insert_at_front();
				break;
			case 3:
				insert_at_end();
				break;
			case 4:
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
				break;
			case 11:
				display_list();
				break;
			case 12:
				exit(0);
		}
	}
	
}
void create_list()
{
	char c='y';
	while(c=='y'||c=='Y')
	
          {
		insert_at_end();
		printf("\nWant to create another node?\t");
		scanf(" %c",&c);
	}
	
}
void insert_at_front()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value :\t");
	scanf("%d",&new_node->data);
	new_node->next=start;
	start=new_node;
	
}
void insert_at_end()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value :\t");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
	}
}
void insert_after_given_value()
{
	int val;
	printf("\nEnter value to be searched: \t");
	scanf("%d",&val);
	temp=start;
	while(temp!=NULL){
		if(temp->data ==val)
		{
			new_node=(struct node *)malloc(sizeof(struct node));
			printf("\nEnter value :\t");
			scanf("%d",&new_node->data);
			new_node->next=temp->next;
			temp->next=new_node;
			return;
			
		}
		temp=temp->next;
	}
	printf("\nValue isn't in the list.\n");
}
void insert_after_given_position()
{
	int c=count();
	int pos;
	printf("\nEnter Position:\t");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("\nPosition Out Of Range.\n");
	
	}
	else
	{
		temp=start;
		pos=pos-1;
		while(pos--)
		{
			temp=temp->next;
		}
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter value :\t");
		scanf("%d",&new_node->data);
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void delete_from_front()
{
	if(start==NULL)
	{
		printf("\nList Empty....\n");
	}
	else
	{
		temp=start;
		start=temp->next;
	}
	free(temp);
}
void delete_from_end()
{
	if(start==NULL)
	{
		printf("\nList Empty....\n");
	}
	else
	{
		temp=start;
		struct node *second_last;
		while(temp->next!=NULL)
		{
			second_last=temp;
			temp=temp->next;
		}
		second_last->next=NULL;
	}
	free(temp);
}
void delete_after_given_value()
{
	int val_for_search;
	printf("\nEnter value to be searched: \t");
	scanf("%d",&val_for_search);
	temp=start;
	
	while(temp!=NULL)
	{
		
		if(temp->data ==val_for_search)
		{
			
			temp->next=temp->next->next;
			return;
			
		}
		temp=temp->next;
		
	}
	printf("\nValue isn't in the list.\n");
	free(temp);
	
}
void delete_after_given_position()
{
	int c=count();
	int pos;
	printf("\nEnter Position:\t");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("\nPosition Out Of Range.\n");
	
	}
	else
	{
		temp=start;
		pos=pos-1;
		while(pos--)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		
	}	
	
}
void reverse_list()
{
	struct node *next,*prev=NULL;
	temp=start;
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
		
	}
	start=prev;
	free(next);
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
int count()
{
	int c=1;
	temp=start;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}

