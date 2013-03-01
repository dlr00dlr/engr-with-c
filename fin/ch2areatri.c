#include <stdio.h>

int main(void)
{
	double h, b, area;
	h = b = area = 0;
	printf("Base and Height? ");
	scanf("%lf %lf",&b,&h);	

	area = h * b / 2;

	printf("The area is %5.2lf.\n",area);
	return 0;

}
