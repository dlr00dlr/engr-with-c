#include <stdio.h>
int main(void)
{
	int x=100000,y=20;
	printf("x=%d y=%d\n",x,y);
	x= x >> 4;y= y << 3;
	printf("x=%d y=%d\n",x,y);
	return 0;
}
