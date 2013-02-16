#include <stdio.h>
int main(void)
{
	double x=1;
	printf("Pounds:		Dollars:\n");
	while(x<=59)
		{printf("%.0f		%.2f\n",x,x*.632293);	x+=2;}
	return 0;
}
