#include <stdio.h>
#include <math.h>
#define PI 3.141593
#define FILENAME "waves1.txt"

int main(void)
{
	int k; double A1, A2, f1, f2, h1, h2, l1, l2, T1, T2, w1, w2, sum, new_period, new_h, time_incr, t, maxwave=0;
	FILE *waves; waves = fopen(FILENAME,"w");

	printf("Enter integer wave period (s) & wave height (ft) \n for wave 1: \n");
	scanf("%lf %lf",&T1,&h1);
	printf(" for wave 2: \n");
	scanf("%lf %lf",&T2,&h2);
	l1 = 5.13*T1*T1; l2 = 5.13*T2*T2;
	printf("The wavelengths (ft) are: %.2f %.2f \n",l1,l2);
	new_period = T1*T2; time_incr = new_period / 200;
	A1 = h1/2; A2 = h2/2;
	f1 = 1/T1; f2 = 1/T2;
	for (k=0;k<=199;k++){
		t = k*time_incr;
		w1 = A1*sin(2*PI*f1*t); w2 = A2*sin(2*PI*f2*t);
		sum = w1 + w2; fprintf(waves,"%.4f %.4f %.4f %.4f \n",t,w1,w2,sum);
		if(sum > maxwave) maxwave = sum;}
	new_h = maxwave*2;
	printf("Maximum combined wave height is %.2f ft \n",new_h);
	fclose(waves);
	return 0;
}
