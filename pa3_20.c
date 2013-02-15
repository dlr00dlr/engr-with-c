#include <stdio.h>
int main(void)
{
	double x=0;
	printf("Inches:		Centimeters:\n");
	while(x<=20)
	{
	printf("%.1f		%.2f\n",x,x*2.54);
	x+=.5;
	}
	return 0;
}
