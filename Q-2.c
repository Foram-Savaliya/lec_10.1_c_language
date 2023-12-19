#include<stdio.h>

void divide(int x)
{
	
	if(x%3==0 && x%5==0)
	{
		printf("The given number is divisible by both 3 & 5");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5");
	}
}

void main()
{
	int a;
	printf("Enter any number :- ");
	scanf("%d",&a);
	divide(a);
}
