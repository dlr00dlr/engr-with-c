#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{	unsigned int seed; int n, k; double component_reliability, a_series, a_parallel, series_success=0, parallel_success=0,
	num1, num2, num3;
	double rand_float(double a, double b);

	printf("Enter individual component reliability: \n"); scanf("%lf",&component_reliability);
	printf("Enter number of trials: \n"); scanf("%i",&n);
	printf("Enter unsigned integer seed: \n"); scanf("%u",&seed);
	srand(seed); printf("\n");
	a_series = pow(component_reliability,3);
	a_parallel = 3*component_reliability - 3* pow(component_reliability,2) + pow(component_reliability,3);
	for (k=0;k<=n;k++) 
	{	num1 = rand_float(0,1);
		num2 = rand_float(0,1);	
		num3 = rand_float(0,1);
		if (((num1 <= component_reliability) && (num2 <= component_reliability)) && (num3 <= component_reliability))
		       series_success++;	
		if (((num1 <= component_reliability) || (num2 <= component_reliability)) || (num3 <= component_reliability))
			parallel_success++;
	}
	printf("Analytical Reliability \n");
	printf("Series: %.3f Parallel: %.3f \n",a_series,a_parallel);
	printf("Simulation Reliability, %i trials \n",n);
	printf("Series: %.3f Parallel: %.3f \n",(double)series_success/n,(double)parallel_success/n);
	return 0;
}
double rand_float(double a, double b)
{	return ((double)rand()/RAND_MAX)*(b-a)+a;
}
