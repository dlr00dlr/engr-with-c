#include <stdio.h>
#include <math.h>
int main(void)
{
	double time, velocity, acceleration;
	printf("Enter new time in minutes: \n");
	scanf("%lf",&time);
	time *= 60;
	velocity = 0.00001*pow(time,3)-0.00488*pow(time,2)+0.75795*time+181.3566;
	acceleration = 3 - 0.000062*velocity*velocity;

	printf(" Velocity = %8.3f m/s \n",velocity*3.28);
	printf("Acceleration = %8.3f m/s^2 \n",acceleration*3.28);

	return 0;
}
