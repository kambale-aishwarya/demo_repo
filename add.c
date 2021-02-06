#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a=10;
	int b=20;
	int sum=0;
        sum=add_num(a,b)	
	printf("The sum is:%d",&sum);
}

int add_num(int a,int b)
{
	int add=0;
	add=a+b;
	return(add);
}
