#include <stdio.h>
int main(void)
{
	double x=0;
	printf("ft/s:		MPH:\n");
	while(x<=100)
		{printf("%.0f		%.2f\n",x,x*3600/5280);	x+=5;}
	return 0;
}
