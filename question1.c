#include<stdio.h>

// Square
float sq(float a)
{
	float b,c,p,q,r, sum;

	b = a*a;
	return (b);

}

void main()
{
	float a,b,c,i,j;
	c = 0;
	printf("Enter a number: ");
	scanf("%f", &a);//5

	printf("How many numbers you want to add: ");
	scanf("%f", &j);

	for (i=a;i<a+j;i++)
	{
		b = sq(i);
		c = c+b;
	}

	
	printf("\nSum of %2.3f numbers from %2.3f = %2.3f\n",j,a,c);
}
