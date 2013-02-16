#include <stdio.h>
#include <math.h>
int main(void)
{
	double eye1, eye2, eye3, nose1, nose2, nose3, ratio1, ratio2, ratio3, diff1_2, diff2_3, diff1_3;

	printf("enter eye & nose distance for image 1: \n");
	scanf("%lf %lf",&eye1,&nose1);
	printf("enter eye & nose distance for image 2: \n");
	scanf("%lf %lf",&eye2,&nose2);
	printf("enter eye & nose distance for image 3: \n");
	scanf("%lf %lf",&eye3,&nose3);

	ratio1 = eye1/nose1;
	ratio2 = eye2/nose2;
	ratio3 = eye3/nose3;

	diff1_2 = fabs(ratio1 - ratio2);
	diff1_3 = fabs(ratio1 - ratio3);
	diff2_3 = fabs(ratio2 - ratio3);

	if ((diff1_2 <= diff1_3) && (diff1_2 <= diff2_3))
		 printf("Best match is between image 1 and 2.\n");
	if ((diff1_3 <= diff1_2) && (diff1_3 <= diff2_3))
		 printf("Best match is between image 1 and 3.\n");
	if ((diff2_3 <= diff1_3) && (diff2_3 <= diff1_2))
		 printf("Best match is between image 2 and 3.\n");

	return 0;
}
