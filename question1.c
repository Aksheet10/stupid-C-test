#include<stdio.h>

// Square
void sq()
{
	int a,b,c,p,q,r, sum;
/*	printf("Enter a integer: ");
	scanf("%d", &a);

	b = a*a;
	printf("Square of %d is %d\n", a, b);*/


	printf("Enter a number: ");
	scanf("%d", &a);//5
	b = a+1; //6
	c = b+1; //7

	p = a*a;
	q = b*b;
	r = c*c;

	sum = p + r +q;

	printf("\nSquare of %d is %d\n",a, p);
	printf("Square of %d is %d\n",b, q);
	printf("Square of %d is %d\n",c, r);

	printf("\nSum = %d\n",sum);

}

void main()
{
	sq();
}
