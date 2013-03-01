#include <stdio.h>

int main(void)
{
	double x, y;
	x = y = 0;
	printf("How many newtons? ");
	scanf("%lf",&x);	

	x/=4.448;

	printf("That is %5.2lf pounds.\n",x);
	return 0;

}
