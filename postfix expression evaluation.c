#include<stdio.h>
#include<ctype.h>
#define MAXSIZE 10
#include<math.h>

int stck[MAXSIZE],tos=-1;

void push(int x)
{
	if(tos==MAXSIZE-1)
	printf("stack overflow");
	else
	{
		tos++;
		stck[tos]=x;
	}
}
int pop()
{
	int y=-1;
	if(tos==-1)
		printf("\nstack underflow");
	else
	{
		y=stck[tos];
		tos--;
	}	
	return y;
}
int main()
{
	char postfix[100];
	int i=0,val,x,y,z;
	printf("Enter the postfix expression :");
	gets(postfix);
	while(postfix[i]!='\0')
	{
		if(isalpha(postfix[i]))
		{
			printf("\nenter the value for operand %c :",postfix[i]);
			scanf("%d",&val);
			push(val);
		}
		else
		{
			x=pop();
			y=pop();
			switch(postfix[i])
			{
				case '+':
					z=y+x;
					break;
				case '-':
					z=y-x;
					break;
				case '*':
					z=y*x;
					break;
				case '/':
					z=y/x;
					break;
				case '%':
					z=y%x;
					break;
				case '^':
					z=pow(y,x);
					break;
			}
			push(z);
		
		}	
		i++;
	}

	printf("the result is:%d",stck[tos]);
	return 0;
}
