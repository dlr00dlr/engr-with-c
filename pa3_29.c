#include <stdio.h>
int main(void)
{
	double x,i;
	int k;
	printf("Enter init temp & increment:");scanf("%lf %lf",&x,&i);
	printf("C	R\n");
	for(k=0;k<=24;k++){
		printf("%.0f	%.1f\n",x,x*9/5+459.67+32);x+=i;}
	return 0;
}
