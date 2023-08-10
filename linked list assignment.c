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
void insert_after()
{
	struct node *p;
	int data,value;
	p=start;
	printf("\nEnter the value after: ");
	scanf("%d",&value);
	while (p!=NULL)
	{
		if(p->data ==value)
		{
			new_node=(struct node*)malloc(sizeof(struct node));
			printf("\nenter val: ");
			scanf("%d",&new_node->data);
			new_node->next=p->next;
			p->next=new_node;
			return;
		}
		p=p->next;
	}
	printf("\n%d is not present in the list",value);
}
void del_end()
{
	struct node* prev;
	prev=NULL;
	temp=start;
	while(temp->next !=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	free(temp);
	prev->next=NULL;
}
void del_beg()
{
	temp=start;
	start=temp->next;
	free(temp);
	
}
int main()
{
	int choice;
	char ch='y';
		printf("\n  1-Creation");
        printf("\n  2-Insertion of node at the begining");
	    printf("\n  3-Insertion of node at the end");
	    printf("\n  4-Displaying of node");
	    printf("\n  5-Insertion after a node");
	    printf("\n  6-Delete a node from end");
	    printf("\n  7-Delete a node from begining");
	    printf("\n  8-Exit");
	  while(1)
	{
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
	    		break;
	    	case 5:
	    		insert_after();
	    		break;
	    	case 6:
	    		del_end();
	    		break;
	    	case 7:
	    		del_beg();
	    		break;
	    	case 8:
	    		exit(1);
		}
    }
	return 0;
}
