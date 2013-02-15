#include <stdio.h>
int main(void)
{
	double x=100;
	printf("Yen:		Pounds:\n");
	while(x<=10000)
		{printf("%.0f		%.2f\n",x,x*.013005*.632293);	x+=412.5;}
	return 0;
}
