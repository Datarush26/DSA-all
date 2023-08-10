#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#define MAX 10
int tos=-1;
char stck[MAX];
void push(char x)
{
	if(tos==MAX-1)
		printf("\nstack overflow");
	else
	{
		tos++;
		stck[tos]=x;
	}
		
}
char pop()
{
	char y='\0';
	if(tos==-1)
		printf("\nstack underflow");
	else
	{
		y=stck[tos];
		tos--;
	}
		return y;
	
}
int preced(char x)
{
	int v;
	if(x=='^')
		v=100;
	else if(x=='*' || x=='/')
		v=99;
	else if(x=='+' || x=='-')
		v=98;
	else
		v=97;
	return v;
	
}
int main()
{
	int i=0,j=0;
	char q[100],p[100],x;
	printf("\nEnter your infix expression,appended ) at the end");
	gets(q);
	push('(');
	while (q[i]!='\0')
	{
		if(isalpha(q[i]))
		{
			p[j]=q[i];
			j++;
		}
		else
		{
			if(q[i]=='(')
				push(q[i]);
			else if(q[i]==')')
			{
				x=pop();
				while(x!='(')
				{
					p[j]=x;
					j++;
					x=pop();
				}
			}
			else
			{
				while(preced(stck[tos])>=preced(q[i]))
				{
					p[j]=pop();
					j++;
				}
				push(q[i]);
			}
		}
		i++;
	
	}
		p[j]='\0';
		puts(p);
}
