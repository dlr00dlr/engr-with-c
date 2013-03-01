#include <stdio.h>

int main(void)
{
	double r, t, area;
	r = t = area = 0;
	printf("Radius and Theta? \n");
	scanf("%lf %lf",&r,&t);	

	area = r*r*t/2;

	printf("The area is %5.2lf.\n",area);
	return 0;

}
