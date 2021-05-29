#include<stdio.h>

// Square
float sq(float a)
{
	int b,c,p,q,r, sum;
	/*printf("Enter a integer: ");
	scanf("%d", &a);

	b = a*a;
	printf("Square of %d is %d\n", a, b);*/

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

	int a;
	float b;
	printf("Enter a number: ");
	scanf("%d", &a);//5

	b = sq(a);
	printf("\nSum = %2.3f\n",b);
}
