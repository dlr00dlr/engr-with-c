#include <stdio.h>
#include <math.h>
int main(void)
{	double x1, x2, x3, y1, y2, y3, m12, xc, yc, r;
	double circle_x_coord(double x1, double y1, double x2, double y2, double x3, double y3);

	printf("Enter x & y coordinates for the 1st point: \n"); scanf("%lf %lf",&x1,&y1);
	printf("Enter x & y coordinates for the 2nd point: \n"); scanf("%lf %lf",&x2,&y2);
	printf("Enter x & y coordinates for the 3rd point: \n"); scanf("%lf %lf",&x3,&y3);

	if( x1 == y1 || x2 == y2 || x3 == y3) printf("Error\n");
	else
	{
		xc = circle_x_coord(x1,y1,x2,y2,x3,y3);
		m12 = (y2 - y1)/(x2 - x1);
		yc = -(1/m12)*((xc - (x1 + x2)/2) + (y1 + y2)/2);
		r = sqrt((x1 - xc)*(x1 - xc) + (y1 - yc)*(y1 - yc));

		printf("\nCenter of Circle: (%.1f,%.1f)\n",xc,yc);
		printf("Radius of Circle: %.1f \n",r);
		printf("The equation of the circle is (x+%.0f)^2+(y+%.0f)^2=%.0f",xc,yc,r*r);
	}
	return 0;
}

double circle_x_coord(double x1, double y1, double x2, double y2, double x3, double y3)
{	double m12, m23, xc_num, xc_den, xc;
	m12 = (y2 - y1)/(x2 - x1);
	m23 = (y3 - y2)/(x3 - x2);

	xc_num = m12*m23*(y1 - y3) + m23*(x1 + x2) - m12*(x2 + x3);
	xc_den = 2*(m23 - m12);
	xc = xc_num/xc_den;
	return xc;
}
