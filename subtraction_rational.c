#include<stdio.h>

typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int ,int);
rational subtraction(rational ,rational);

int main()
{
	int a,b,c,d;
	printf("enter the numerator and denominator for the first rational number r1\n");
	scanf("%d%d",&a,&b);
	printf("enter the numerator and denominator for the second rational number r2\n");
	scanf("%d%d",&c,&d);
	rational r1=makerational(a,b);
	rational r2=makerational(c,d);
	rational sub=subtraction(r1 ,r2);
	printf("the difference of %d/%d and %d/%d is \n%d/%d",r1.numerator,r1.denominator,r2.numerator,r2.denominator,sub.numerator,sub.denominator);
}

rational makerational(int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational subtraction(rational r1,rational r2)
{
	rational subtract;
	subtract.numerator=((r1.numerator*r2.denominator)-(r2.numerator*r1.denominator));
	subtract.denominator=(r1.denominator*r2.denominator);
	return subtract;
}
