#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many degrees K? ");
	scanf("%lf",&x);	

	y= 9*x/5-459.67;

	printf("That is %5.2lf degrees F.\n",y);
	return 0;

}
