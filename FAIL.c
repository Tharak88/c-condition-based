#include<stdio.h>
void main()
{
	int M,P,C,CS,marks;
	printf("enter each subject marks");
	scanf("%d%d%d%d",&M,&P,&C,&CS);
    if(M<=35)
	{
		printf("\nFAILED IN MATHS");
	}
	 if(C<=35)
	{
		printf("\nFAILED IN CHEMISTRY");
	}
	 if(CS<=35)
	{
		printf("\nFAILED IN COMPUTER SCINCE");
	}
	 if(P<=35)
	{
		printf("\nFAILED IN PHYSICS");
	}
	else if(M>35&P>35&C>35&CS>35)
	{
		printf("PASS AND ALL CLEAR");
	}
}
