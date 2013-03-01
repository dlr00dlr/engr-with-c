#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many miles:");
	scanf("%lf",&x);	

	y = x * 1.6093440 * 1000;

	printf("That is %5.2lf meters.\n",y);
	return 0;

}
