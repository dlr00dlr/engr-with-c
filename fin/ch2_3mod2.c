/* Chapter 2 3 - Linear Interpolating the freezing temp of seawater */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, f_a, b, f_b, c, f_c;
	printf("Use ppt for salinity values. \nUse degrees F for temperature\nEnter first salinity and freezing temperature: \n");
	scanf("%lf %lf",&a,&f_a);
	printf("Enter second salinity and freezing temperature: \n");
	scanf("%lf %lf",&c,&f_c);
	printf("Enter new salinity: \n");
	scanf("%lf",&b);

	f_b = f_a + (b-a)/(c-a)*(f_c - f_a);
	f_b = (f_b - 32)*5/9;
	printf("New freezing temperature in degrees C: %4.1f \n",f_b);

	return 0;
}

