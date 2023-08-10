#include<stdio.h>
int main()
{
	float x[20],y[20][20];
	int n,i,j;
	printf("enter the values of x : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the nos of x %d : ",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the nos for y: ");
		scanf("%f",&y[i][0]);
	}
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
			{
				y[i][j]=y[i+1][j-1]-y[i][j-1];
			}
	}
	printf("the difference rable is\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n-i;j++)
		{
			printf("%f",y[i][j]);
		}
	}
}
