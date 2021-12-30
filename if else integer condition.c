#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d",a);
	}
	else if(a<b)
	{
		printf("%d",b);
	}
	else
	{
		printf("both are equal");
	}
}
