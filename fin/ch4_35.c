#include <stdio.h>
#include <math.h>
int main(void)
{	double x, term=1, sum=1, n=1;
	double factorial(double k);
	printf("Enter angle in radians:");scanf("%lf",&x);
	x *= 3.141592/180;	
	while(fabs(term) >= .0001)
	{	term = ((pow(-1,n)*(pow(x,2*n)))/(2*factorial(n)));
		printf("%f\n",term);
		sum += term; n++;
	} 
	

	printf("%10f%10f\nNumber of terms used %.0f\n",sum,cos(x),n);
	return 0;
}

double factorial(double k)
{
	if (k == 0) return 1;
	else return k*factorial(k-1);
}
