#include <stdio.h>

int main(void)
{
	double r, h, vol;
	r = vol = 0;
	printf("Radius & Height? \n");
	scanf("%lf %lf",&r,&h);	

	vol = 3.14 * r * r * h;

	printf("The volume is %5.2lf.\n",vol);
	return 0;

}
