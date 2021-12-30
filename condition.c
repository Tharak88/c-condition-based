#include<stdio.h>
void main()
{
	int num;
	printf("enter a num");
	scanf("%d",&num);
	if(num>0)
	{
		printf("it is positive");
	}
	else if(num<0)
	{
		printf("it is negative");
	}
	else
	{
		printf("zero");
	}
}
