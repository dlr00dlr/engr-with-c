#include <stdio.h>
int main(void)
{	int n;
	double factorial(int k);
	double factorial_r(int k);

	printf("enter positive integer:\n");scanf("%i",&n);
	printf("nonrecursive: %i! = %lf\n",n,factorial(n));
	printf("recursive: %i! = %lf \n",n,factorial_r(n));
	return 0;
}
double factorial(int k)
{	int j; double term;
	term = 1;
	for (j=2;j<=k;j++) term *= j;
	return term;
}
double factorial_r(int k)
{	if (k==0) return 1;
	else return k*factorial_r(k-1);
}
