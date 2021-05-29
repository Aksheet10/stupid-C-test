#include <stdio.h>

void profloss(float sp, float cp)
{
	if (sp>cp)
		printf("\nProfit\n");
	else
		printf("\nLoss\n");
}


void main()
{

	float sp, cp;
	printf("Please enter Selling price: ");
	scanf("%f", &sp);

	printf("\nPlease enter the cost price: ");
	scanf("%f", &cp);

	profloss(sp, cp);

}
