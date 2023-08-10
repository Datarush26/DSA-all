#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *ptr,**ptr1,h,p=1.0,s,u,a;
	int i,j,n,f;
	printf("How many elements to be inserted?: ");
	scanf("%d",&n);
	ptr=(float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		printf("Enter the value of x[%d]: ",i);
		scanf("%f",ptr+i);
	}
	ptr1=(float**)malloc(n*sizeof(float*));
	for(i=0;i<n;i++)
		ptr1[i]=(float*)malloc(n*sizeof(float));
 	for(i=0;i<n;i++)
	{
	 	printf("Enter the value of y[%d][0]: ",i);
		scanf("%f",&ptr1[i][0]);
	}
	for(i=0;i<n;i++)
	{
		printf("%f",ptr1[i][0]);
	}
	printf("\n");
	h=ptr[1]-ptr[0];
	for(i=1;i<n-1;i++)
	{
		if(ptr[i+1]-ptr[i]==h)
			f=1;
		else
		{
			f=0;
			break;
		}
	}
	if(f==1)
	{
		for(j=1;j<n;j++)
		{
			for(i=j;i<n;i++)
				ptr1[i][j]=ptr1[i][j-1]-ptr1[i-1][j-1];
		}
		printf("The forward difference table is: ");
		for(i=0;i<n;i++)
		{
			printf("\n");
			for(j=0;j<=i;j++)
				printf("%0.3f\t",ptr1[i][j]);
		}
		printf("\n Enter the value of interpolatimg point: ");
		scanf("%f",&a);
		u=(a-ptr[n-1])/h;
		s=ptr1[n-1][0];
		for(j=1;j<n;j++)
		{
			p=p*(u+j-1)/j;
			s=s+p*ptr1[n-1][j];
		}
		printf("\n The value of y at x=%0.1f is %0.3f",a,s);
	}		
	else
		printf("Calculation is not possible.");
	return 0;
}
