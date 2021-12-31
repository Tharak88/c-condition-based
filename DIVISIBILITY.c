#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%1==0)
	{
		printf("\nDIVISIBLE BY 1");
	}
	if(num%2==0)
	{
		printf("\nDIVISIBLE BY 2");
	}
	if(num%3==0)
	{
		printf("\nDIVISIBLE BY 3");
	}
	if(num%4==0)
	{
		printf("\nDIVISIBLE BY 4");
	}
	if(num%5==0)
	{
		printf("\nDIVISIBLE BY 5");
	}
}
