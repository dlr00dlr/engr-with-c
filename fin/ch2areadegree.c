#include <stdio.h>

int main(void)
{
	double r, t, d, area;
	r = t = area = 0;
	printf("Radius and Degrees? \n");
	scanf("%lf %lf",&r,&d);	

	t = d * 3.14 / 180;
	area = r*r*t/2;

	printf("The area is %5.2lf.\n",area);
	return 0;

}
