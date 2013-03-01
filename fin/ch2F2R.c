#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many degrees F? ");
	scanf("%lf",&x);	

	x+=459.67;

	printf("That is %5.2lf degrees R.\n",x);
	return 0;

}
