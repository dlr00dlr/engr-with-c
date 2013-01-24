#include <stdio.h>
#include <math.h>

int main(void)
{
	double femur, femur_ht_f, femur_ht_m, humerus, humerus_ht_f, humerus_ht_m;
	
	printf("Enter Values in Inches.\n");
	printf("Enter femur length:\n");
	scanf("%lf",&femur);
	printf("Enter humerus length:\n");
	scanf("%lf",&humerus);

	femur_ht_f = femur*1.94 + 28.7;
	femur_ht_m = femur*1.88 + 32;
	humerus_ht_f = humerus*2.8 + 28.2;
	humerus_ht_m = humerus*2.9 + 27.9;

	printf("\nHeight Estimates in Inches \n");
	printf("Femur Female Estimate:		%5.1f \n",femur_ht_f);
	printf("Femur Male Estimate:		%5.1f \n",femur_ht_m);
	printf("Humerus Female Estimate:	%5.1f \n",humerus_ht_f);
	printf("Humerus Male Estimate:		%5.1f \n",humerus_ht_m);

	return 0;
}
