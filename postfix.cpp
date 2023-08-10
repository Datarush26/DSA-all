#include<stdio.h>

using namespace std;

int main ()
{
	int i=0,x,a,b;
	double c;
	char input[200];
	stack s1;
	printf("enter a valid postfix exp : ")
	scanf("%s",input);
	
	while(input[i!='\0'])
	{
		if(input[i]>='0' && input[i]<='9')
		{
			x=input[i]-48;
			s1.push(x);	
		}
		else if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/')
		{
			a=s1.pop();
			b=s1.pop();
			switch(input[i])
			{
				case '+';
						c=b+a;
						s1.push(c);
						break;
				case '-';
						c=b-a;
						s1.push(c);
						break;
				case '*';
						c=b*a;
						s1.push(c);
						break
						
				case '/';
						c=b/a;
						s1.pusp(c);
						break;
				
			}
			
			
		}
		
		i++
		
		
	}	
	
	cout<<""<<s1.pop()<<endl;	
}
