#include<stdio.h>
void main()
{
	int sp,bp,amntloss,amntpro;
	float losspercent,profitpercent;
	printf("enter the sp and bp");
	scanf("%d%d",&sp,&bp);

	if(bp>sp)
	{
		
		amntpro=bp-sp;
		profitpercent=amntpro*100.0/sp;
		printf("\nprofitpercent is %f%%",profitpercent);
		printf("\namntpro is %d",amntpro);
		}
		if(bp<sp)
		{
			amntloss=sp-bp;
	losspercent=amntloss*100.0/sp;
	printf("\losspercent is %f%%",losspercent);
	printf("\namntloss is %d",amntloss);
		}
}
