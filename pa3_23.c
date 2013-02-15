#include <stdio.h>
int main(void)
{
	double x=5;
	printf("$:		Euros:\n");
	while(x<=125)
		{printf("%.0f		%.2f\n",x,x*.737938);	x+=5;}
	return 0;
}
