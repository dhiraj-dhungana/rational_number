#include<stdio.h>
#include<conio.h>
typedef struct{
	int numarator;
	int denominator;
}rational;

rational makerational(int , int);
rational add_rational(rational ,rational);

void main()
{
	int a,b,c,d;
	printf("enter the numerator and denominator for the first rational number r1\n");
	scanf("%d%d",&a,&b);
	printf("enter the numerator and denominator for the second rational number r2\n");
	scanf("%d%d",&c,&d);
	rational r1=makerational(a,b);
	rational r2=makerational(c,d); 
	rational sum=add_rational (r1,r2);
	printf("the sum of %d/%d and %d/%d is \n%d/%d",r1.numarator,r1.denominator,r2.numarator,r2.denominator,sum.numarator,sum.denominator);
}

rational makerational(int a,int b)
{
	rational r_number;
	r_number.numarator=a;
	r_number.denominator=b;
	return r_number;
}
 rational add_rational(rational a, rational b)
 {
 	rational result;
 	result.numarator=(a.numarator*b.denominator)+(b.numarator*a.denominator);
 	result.denominator=a.denominator*b.denominator;
 	return result;
 }
