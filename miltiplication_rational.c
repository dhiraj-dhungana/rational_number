#include<stdio.h>

typedef struct{
	int numerator;
	int denominator;
}rational;
rational makerational(int,int);
rational multiply(rational ,rational);
int main()
{
	int a,b,c,d;
	printf("enter the numerator and denominator for the first rational number r1\n");
	scanf("%d%d",&a,&b);
	printf("enter the numerator and denominator for the second rational number r2\n");
	scanf("%d%d",&c,&d);
	rational r1=makerational(a,b);
	rational r2=makerational(c,d);
	rational mul=multiply(r1,r2);
	printf("the product of %d/%d and %d/%d is \n%d/%d",r1.numerator,r1.denominator,r2.numerator,r2.denominator,mul.numerator,mul.denominator);
}

rational makerational (int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational multiply(rational r1,rational r2)
{
	rational multiply;
	multiply.numerator=(r1.numerator*r2.numerator);
	multiply.denominator=(r1.denominator*r2.denominator);
	return multiply;
}
