#include <stdio.h>
int main(void)
{
	double x=0;
	printf("MPH:		ft/s:\n");
	while(x<=65)
		{printf("%.0f		%.2f\n",x,x*5280/3600);	x+=5;}
	return 0;
}
