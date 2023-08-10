#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *new_node,*temp;
char ch='y';
void ins_end()
{
		new_node=(struct node*)malloc(sizeof(struct node));
	    printf("\n Enter the value of new node :");
	    scanf("%d",&new_node->data);
	    new_node->next=NULL;
		if(start==NULL)
			start=new_node;
		else
		{
		temp=start;
		while(temp->next!=NULL)
				temp=temp->next;
		temp->next=new_node;
		}
}
int count()
{
	int i=0;
	temp=start;
	while(temp!=NULL)
	{
			i++;
		temp=temp->next;
	}
	printf("\n The no of node is %d",i);
	return i;
		
}
void createList()
{
	char ch ='y';
	while (ch=='y'||ch=='Y')
	{
		ins_end();
		printf("Do you want to insert another node: ");
		scanf(" %c",&ch);
	}
}
void ins_beg()
{
		new_node=(struct node*)malloc(sizeof(struct node));
	    printf("\n Enter the value of new node(data):");
	    scanf("%d",&new_node->data);
	    new_node->next=start;
	    start=new_node;
}
void dis()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d----->",(*temp).data);
		temp=temp->next;
	}
	printf("NULL");	
}
void insert_at_given_value()
{
	int n;
	printf("\nEnter the data after which you want to instert:");
	scanf("%d",&n);
	printf("\nEnter the new data: ");
	scanf("%d",&new_node->data);
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data == n)
		{
			new_node=(struct node*)malloc(sizeof(struct node));
			new_node->next=temp->next;
			temp->next=new_node;
			break;
		}
		temp=temp->next;
	}
	if(temp=NULL)
		printf("\nThe data is not found");
		
}
int main()
{
	int choice;
	char ch='y';
	while(1)
	{
		printf("\n  1-Creation");
        printf("\n  2-Insertion at the beginning");
	    printf("\n  3-Insertion at the end");
	    printf("\n  4-Displaying of node");
	    printf("\n  5-randominsert");
	    printf("\n  6-exit");
	    printf("\n Enter your choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
				createList();
				break;
			case 2:
	    		ins_beg();
	    		break;
	    	case 3:
	    		ins_end();
	    		break;
	    	case 4:
	    		dis();
				count();
	    		break;
	    	case 5:
	    		insert_at_given_value();
	    		break;
	    	case 6:
	    		exit(1);
		}
    }
	return 0;
}
