#include <stdio.h>
#include <math.h>
#define PI 3.141593
int main(void)
{	double lat1, long1, lat2, long2;
	double gc_distance(double lat1, double long1, double lat2, double long2);

	printf("Enter latitude north & longitude west for location 1:\n");scanf("%lf %lf",&lat1,&long1);
	printf("Enter latitude north & longitude west for location 2:\n");scanf("%lf %lf",&lat2,&long2);
	printf("Great Circle Distance: %.0f miles \n",gc_distance(lat1, long1, lat2, long2));
	return 0;
}
double gc_distance(double lat1, double long1, double lat2, double long2)
{	double rho, phi, theta, x1, y1, z1, x2, y2, z2;
	double angle(double x1, double y1, double z1, double x2, double y2, double z2);

	rho = 3960;
       	phi = (90 - lat1)*(PI/180.0); theta = (360 - long1)*(PI/180.0);
	x1 = rho*sin(phi)*cos(theta);
       	y1 = rho*sin(phi)*sin(theta);
       	z1 = rho*cos(phi);
	
	phi = (90 - lat2)*(PI/180.0); theta = (360 - long2)*(PI/180.0);
	x2 = rho*sin(phi)*cos(theta);
       	y2 = rho*sin(phi)*sin(theta);
       	z2 = rho*cos(phi);

	return angle(x1, y1, z1, x2, y2, z2)*rho;	
}
double angle(double x1, double y1, double z1, double x2, double y2, double z2)
{	double gamma, dot, dist1, dist2;

	dot = x1*x2 + y1*y2 + z1*z2;
       	dist1 = sqrt(x1*x1 + y1*y1 + z1*z1);
       	dist2 = sqrt(x2*x2 + y2*y2 + z2*z2);
	gamma = acos(dot/(dist1*dist2));
	return gamma;
}
