/* Ch1-1 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	// variables
	double x1=2, y1=4, x2=2, y2=4, side_1, side_2, distance;
	
	// compute sides then distance
	side_1 = x2 - x1;
	side_2 = y2 - y1;
	distance = sqrt(side_1*side_1 + side_2*side_2);
	
	// print distance
	printf("The distance between the two points is ""%5.2f \n",distance);
	
	return 0;
}
