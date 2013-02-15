#include <stdio.h>
int main(void)
{
	int x=1;
	printf("F	C\n");
	while(x<=100){
		printf("%.0d	%.1f\n",x,(x-32.0)*5/9);
		if(x%5==0)printf("a line\n");
		x+=1;}
	return 0;
}
