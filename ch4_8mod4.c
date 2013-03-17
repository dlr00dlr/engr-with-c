#include <stdio.h>
#include <math.h>
int main(void)
{	int n, k; double a0, a1, a2, a3, a4, a, b, step, left, right;
	void check_roots(double left, double right, double a0, double a1, double a2, double a3, double a4);
	printf("Enter coefficients a0, a1, a2, a3, a4: \n");scanf("%lf %lf %lf %lf %lf",&a0,&a1,&a2,&a3,&a4);
	printf("Enter interval limits a,b (a<b):\n");scanf("%lf %lf",&a,&b);
	printf("Enter step size: \n");scanf("%lf",&step);
	n = ceil((b-a)/step);
	for(k=0;k<=n-1;k++)
	{	left = a + k * step; 
		if (k == n-1) right = b;
		else right = left + step;
		check_roots(left, right, a0, a1, a2, a3, a4);
	}
	return 0;
}
void check_roots(double left, double right, double a0, double a1, double a2, double a3, double a4)
{	double f_left, f_right;
	double poly(double x, double a0, double a1, double a2, double a3, double a4);
	f_left = poly(left, a0, a1, a2, a3, a4); f_right = poly(right, a0, a1, a2, a3, a4);
	if (fabs(f_left) < 0.1e-04) printf ("Root detected at %.3f\n",left);
	else if (fabs(f_right) < 0.1e-04);
		else if (f_left*f_right < 0) 
			printf("Root detected at %.3f \n",(left+right)/2);
		return;
}
double poly(double x, double a0, double a1, double a2, double a3, double a4)
{	return a0*x*x*x*x + a1*x*x*x + a2*x*x + a3*x + a4;
}
