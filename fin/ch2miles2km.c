#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many miles:");
	scanf("%lf",&x);	

	y = x * 1.6093440;

	printf("That is %5.2lf kilometers.\n",y);
	return 0;

}
