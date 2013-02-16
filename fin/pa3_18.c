#include <stdio.h>
#define PI 3.14159
int main(void)
{
	double x=0;
	printf("Radians: 	Degrees:\n");
	while(x<=20)
	{
	printf("%.4f		%.0f\n",x*PI/10,x/10*180);
	x++;
	}
	return 0;
}
