#include<stdio.h>
void OR(int i,int j)
{
	if(i!=0)
	{
		printf("the answer is 1");
	}
	else
	printf("the answer is 0");
}
int main()
{
	int i,j;
	printf("enter the first and second value");
	scanf("%d%d",&i,&j);
	OR(i,j);
}
