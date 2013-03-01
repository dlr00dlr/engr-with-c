#include <stdio.h>

int main(void)
{
	float x, y, z;
	x = 2.5e-30;
	y = 1.0e30;
	z = x / y;

	printf("z = %.30000f \n",z);
	return 0;

}
