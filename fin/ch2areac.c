#include <stdio.h>

int main(void)
{
	double r, area;
	r = area = 0;
	printf("Radius? ");
	scanf("%lf",&r);	

	area = 3.14*r*r;

	printf("The area is %5.2lf.\n",area);
	return 0;

}
