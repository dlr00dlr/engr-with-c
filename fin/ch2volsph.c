#include <stdio.h>

int main(void)
{
	double r, vol;
	r = vol = 0;
	printf("Radius? \n");
	scanf("%lf",&r);	

	vol = 3.14 * r * r * r * 4 / 3;

	printf("The volume is %5.2lf.\n",vol);
	return 0;

}
