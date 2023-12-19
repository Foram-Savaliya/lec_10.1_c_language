#include<stdio.h>

void cube()
{
	int a,cube;
	printf("Enter any number :- ");
	scanf("%d",&a);
	
	cube=a*a*a;
	printf("cube is : %d",cube);
}
void main()
{
	cube();
}
