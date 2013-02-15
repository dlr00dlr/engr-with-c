#include <stdio.h>
#define PI 3.14159
int main(void)
{
	double x=0;int i;
	printf("Enter increment:");scanf("%d",&i);
	printf("Degrees:		Radians:\n");
	while(x<=360)
	{
	printf("%.0f		%.4f\n",x,x*PI/180);
	x+=i;
	}
	return 0;
}
