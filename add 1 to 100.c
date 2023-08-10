#include<stdio.h>
#include<conio.h>

int main()
{
	int i,x,s=0,n=100;
	printf("From which no you want to add\n");
	scanf("%d",&x);
	for (i=x;i<=n;i++)
	{
		s=s+i;
	}	
	printf("%d",s);
		
} 
