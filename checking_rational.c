#include<stdio.h>

typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int ,int);
rational checkrational(rational, rational);

int main()
{
	int a,b,c,d;
	printf("enter the numerator and denominator for first rational number r1:\n");
	scanf("%d%d",&a,&b);
	printf("enter the nunerator and denominator for second rational number r2:\n");
	scanf("%d%d",&c,&d);
	rational r1=makerational(a,b);
	rational r2=makerational(c,d);
	checkrational(r1,r2);	
}

rational makerational(int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational checkrational(rational r1,rational r2)
{
	if(r1.numerator==r2.numerator&&r1.denominator==r2.denominator)
	{
		printf("the given rational numbers: %d/%d and %d/%d are equal",r1.numerator,r1.denominator,r2.numerator,r2.denominator);
	}
	else
	{
		printf("the given rational numbers: %d/%d and %d/%d are not equal",r1.numerator,r1.denominator,r2.numerator,r2.denominator);
	}
}
