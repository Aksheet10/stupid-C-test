#include<stdio.h>

// Square
float sq(float a)
{
	int b,c,p,q,r, sum;

	//b = a*a;
	//return (b);
	b = a+1; //6
	c = b+1; //7

	p = a*a;
	q = b*b;
	r = c*c;

	sum = p + r +q;

	return (sum);

}

void main()
{
	float a,b;
	printf("Enter a number: ");
	scanf("%f", &a);//5

	b = sq(a);
	printf("\nSum = %2.3f\n",b);
	//printf("\nSquare of %f is %f\n",a,b);
}
