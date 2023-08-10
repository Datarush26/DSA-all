#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define MAXSIZE 100

int stack[MAXSIZE], tos = -1;

void push(int x){
	if(tos == MAXSIZE - 1)
	printf("\nStack Overflow:");
	else
	{
		tos = tos + 1;
		stack[tos] = x;
	}
}

int pop() {
	int y = -1;
	if(tos == -1)
	printf("\nStack empty.");
	else{
		y = stack[tos];
		tos = tos - 1;
	}
	return y;
}

int main(){
	char p[100];
	int i=0,val,x,y,z;
	printf("\n Enter the postfix expression: ");
	gets(p);
	while(p[i] != '\0'){
		if(isalpha(p[i])){
			printf("\nEnter the value for operend %c: ", p[i]);
			scanf("%d",&val);
			push(val);
		}
		else{
			x = pop();
			y = pop();
			switch(p[i]){
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
	printf("\n The evaluted result of posfix expression = %d ",stack[tos]);
	return 0;
}
