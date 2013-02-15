#include <stdio.h>

int main(void)
{
	double la,aa,lb,ab,lc,ac;
	la=5,ab=25,aa=10,lc=15,ac=20;
	lb = la+(ab-aa)*(lc-la)/(ac-aa);
	printf("lb = %f",lb*3.1415/180);
	return 0;
}
