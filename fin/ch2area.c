#include <stdio.h>

int main(void)
{
	double a, b, area;
	a = b = area = 0;
	printf("Side A & B? ");
	scanf("%lf %lf",&a,&b);	

	area = a * b;

	printf("The area is %5.2lf.\n",area);
	return 0;

}
