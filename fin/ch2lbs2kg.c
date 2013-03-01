#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many pounds? ");
	scanf("%lf",&x);	

	x/=2.205;

	printf("That is %5.2lf kilograms.\n",x);
	return 0;

}
