#include <stdio.h>
int main(void)
{
	int x=0,i;
	printf("Enter increment:");scanf("%d",&i);
	printf("F	K\n");
	do{printf("%.0d	%.1f\n",x,(x+459.67)*5/9);x+=i;}
		while(x<=200);
	return 0;
}
