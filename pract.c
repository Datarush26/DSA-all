#include<stdio.h>
int main(){
	int *p;
	int a;
	a=10;
	p =(&a);
	printf("%d",*p);
}
