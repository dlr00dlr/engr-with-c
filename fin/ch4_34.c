#include <stdio.h>
#include <math.h>
int main(void)
{	double i, x, y, cosx;
	printf("Enter angle in radians:");scanf("%lf",&x);
	x *= 3.141592/180;
	cosx=(1-(x*x/2)+(pow(x,4)/24)-(pow(x,6)/720)+(pow(x,8)/40320));
	printf("%10f%10f\n",cosx,cos(x));
	return 0;
}
