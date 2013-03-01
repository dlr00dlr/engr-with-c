#include <stdio.h>
#include <math.h>

int main(void)
{
	double femur, femur_ht_f, femur_ht_m, humerus, humerus_ht_f, humerus_ht_m, tmp;

	printf("Enter Values in Inches.\n");
	printf("Enter femur length:\n");
	scanf("%lf",&femur);
	scanf("%lf",&tmp);femur+=tmp/10*12;
	printf("Enter humerus length:\n");
	scanf("%lf",&humerus);
printf("%f",femur);
	femur_ht_f = (femur*1.94 + 28.7) /12;
	femur_ht_m = (femur*1.88 + 32) /12;
	humerus_ht_f = (humerus*2.8 + 28.2) /12;
	humerus_ht_m = (humerus*2.9 + 27.9) /12;

	printf("\nHeight Estimates in Inches \n");
	printf("Femur Female Estimate:		%5.0f %2.0f \n",floor(femur_ht_f),(femur_ht_f-floor(femur_ht_f))*10);
	printf("Femur Male Estimate:		%5f %.1f \n",femur_ht_m,femur_ht_m);
	printf("Humerus Female Estimate:	%5f %.1f \n",humerus_ht_f,humerus_ht_f);
	printf("Humerus Male Estimate:		%5f %.1f \n",humerus_ht_m,humerus_ht_m);

	return 0;
}
