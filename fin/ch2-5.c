/* Ch2-5 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("short maximum: %i \n",SHRT_MAX);
	printf("int maximum: %i \n",INT_MAX);
	printf("long maximum: %li \n\n",LONG_MAX);
	
	printf("float percision digits: %i \n",FLT_DIG);
	printf("float maximum exponent: %i \n",FLT_MAX_10_EXP);
	printf("float maximum: %.7e \n\n",FLT_MAX);

	printf("double precision digits: %i \n",DBL_DIG);
	printf("double maximum exponent: %i \n",DBL_MAX_10_EXP);
	printf("double maximum: %.16e \n\n",DBL_MAX);

	printf("long double precision digits: %i \n",LDBL_DIG);
	printf("long double maximum exponents: %i \n",LDBL_MAX_10_EXP);
	printf("long double maximum: %.19Le \n\n",LDBL_MAX);

	return 0;
}
