#include <stdio.h>
#include <math.h>
int main(void)
{
	double time, velocity, acceleration;
	printf("Enter new time in seconds: \n");
	scanf("%lf",&time);

	velocity = 0.00001*pow(time,3)-0.00488*pow(time,2)+0.75795*time+181.3566;
	acceleration = 3 - 0.000062*velocity*velocity;

	printf(" Velocity = %8.3f m/s \n",velocity);
	printf("Acceleration = %8.3f m/s^2 \n",acceleration);

	return 0;
}
