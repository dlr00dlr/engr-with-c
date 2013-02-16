#include <stdio.h>
int main(void)
{
	double x=1;
	printf("$:	Euros:	Yen:	Pounds:\n");
	while(x<=50)
		{printf("%.0f	%.2f	%.0f	%.2f\n",x,x*.737938,
				x*76.8935,x*.632293);	x+=1;}
	return 0;
}
