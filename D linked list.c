#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
}; 
struct node *start=NULL, *end=NULL;
struct node *new_node, *temp, *curr;void create_list();
void insert_begining();
void insert_end();
void insert_after_given_value();
void insert_after_given_pos();
void delete_begining();
void delete_end();
void delete_after_given_value();
void delete_after_given_pos();
void display();
int count();
void dlist_creation()
{
   char c='y';
	while(c=='y'||c=='Y')
	{
		insert_end();
		printf("\nWant to create another node?\t");
		scanf(" %c",&c);
	}	
}
void insert_begining()
{
	new_node =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new_node->data);
    new_node->next = NULL;
	new_node->prev = NULL;
	new_node->next = start;
	start->prev = new_node;
	start = new_node;
} 
void insert_end()
{  
    new_node =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new_node->data);
    new_node->next = NULL;
	new_node->prev = NULL;
    if(start == NULL)  
    {  
		 start = new_node;
		 end = new_node;
    }  
    else
    {
      end->next = new_node;
	  new_node->prev = end;
	  end = new_node;  	 
	}
} 
void insert_after_given_value()
{
	int val;
	printf("\nEnter value to be searched: \t");
	scanf("%d",&val);
	temp = start;
	while(temp != NULL && temp->data!= val)
	{
		temp= temp->next;
	}
	if(temp == NULL)
	    printf("Value not present.");
	else
	{
	    new_node =(struct node *)malloc(sizeof(struct node));
		printf("Enter the element:");
		scanf("%d",&new_node->data);
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->prev = temp;
		new_node->next = temp->next;
	    temp->next->prev = new_node;
	    temp->next = new_node;
    }
}
void insert_after_given_pos()
{
	struct node*next_node;
	int pos, i=1, c=count();
	printf("Enter position:");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("Position out of range.");
	}
	else
	{
		temp = start;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		new_node =(struct node *)malloc(sizeof(struct node));
        printf("Enter the element:");
    	scanf("%d",&new_node->data);
    	new_node->next = NULL;
		new_node->prev = NULL;
		next_node = temp->next;
		new_node->prev = temp;
		new_node->next = next_node;
		next_node->prev = new_node;
		temp->next = new_node;
	}
}
void delete_begining()
{
   temp = start;
   start = start->next;
   start->prev = NULL;
   free (temp);	
}
void delete_end()
{
	temp = end;
	end = end->prev;
	end->next = NULL;
	free (temp);
}
void delete_after_given_node()
{
    struct node*curr;
    int val;
	printf("\nEnter value after which deletion will be performed:: \t");
	scanf("%d",&val);
	temp = start;
	while(temp != NULL && temp->data!= val)
	{
		temp= temp->next;
	}
	if(temp->data == val)
	{
		curr = temp->next;
		temp->next = temp->next->next;
		temp->next->prev = temp;
		free (curr);
	}
	printf("Value not present.");	
}
void delete_after_given_pos()
{
	struct node*next_node;
	int pos, i=1, c=count();
	printf("Enter position:");
	scanf("%d",&pos);
	if(pos>c)
	{
		printf("Position out of range.");
	}
	else
	{
		temp = start;
		while(i< pos)
		{
			temp = temp->next;
			i++;
		}
		curr = temp->next;
		next_node = temp->next->next;
		temp->next = next_node;
		next_node->prev = temp;
		free (curr);
	}
}
void display()
{
	struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = start;  
    while(ptr != NULL)  
    {  
        printf("%d----->",ptr->data);  
        ptr=ptr->next;  
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
int main ()  
{  
int choice;  
    while(1)  
    {    
        printf("\nChoose one option from the following list:\n");  
        printf("\n1.Creation of Doubly linked list\n2.Insert in begining\n3.Insert at last\n4.Insert after a given node\n5.Insert after a given position\n6.Delete from Beginning\n7.Delete from last\n8.Delete the node after the given data\n9.Delete the node after the given position\n10.Show\n11.Exit\n");  
        printf("\nEnter your choice: ");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:
            	dlist_creation();
            	break;
			case 2:  
                insert_begining();  
                break;
            case 3:  
                insert_end();  
            	break;  
            case 4:  
                insert_after_given_value();  
           		break;
		 	case 5:  
                insert_after_given_pos();  
           		break;  
            case 6:  
                 delete_begining();  
            break;  
            case 7:  
                 delete_end();  
            break;  
            case 8:  
                 delete_after_given_node();  
            break;
			case 9:  
                 delete_after_given_pos();  
            break;   
            case 10:  
                display();  
            	break;  
            case 11:  
                exit(0);  
            	break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
} 

