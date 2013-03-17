#include <stdio.h>
#include <stdlib.h>
int main(void)
{	int k=0, i=0, ball1=0, ball2=0, ball3=0, even=0, seven=0, _123=0;
	printf("How many lotteries to draw?\n");scanf("%i",&k);
	for(i=0;i<k;i++)
	{	ball1 = rand_float(1,10);
		ball2 = rand_float(1,10);
		while(ball2==ball1) ball2 = rand_float(1,10);
		ball3 = rand_float(1,10);
		while(ball3==ball1 || ball3==ball2) ball3 = rand_float(1,10);
		if(ball1%2==0 && ball2%2==0 && ball3%2==0)even++;
		if(ball1==7 || ball2==7 || ball3==7)seven++;
		if(ball1==1 && ball2==2 && ball3==3)_123++;
	}
	printf("All even:%i\nContains 7:%i\n123:%i\n ",100*even/k,100*seven/k,100*_123/k);

	return 0;
}
int rand_float(int a, int b)
{	return rand()%(b-a+1) + a;
}
