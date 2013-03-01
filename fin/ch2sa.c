#include <stdio.h>

int main(void)
{
	double r, area;
	r = area = 0;
	printf("Radius? \n");
	scanf("%lf",&r);	

	area = 4 * 3.14 * r * r;

	printf("The surface area is %5.2lf.\n",area);
	return 0;

}
