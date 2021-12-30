#include<stdio.h>
void main()
{
	int bp,sp;
	printf("enter the sp and bp");
	scanf("%d%d",&bp,&sp);
	if(sp>bp)
{
	printf("profit");
}
    else if(sp<bp)
{
	printf("loss");
}
    else
{
	printf("no profit,no loss");
}
}
