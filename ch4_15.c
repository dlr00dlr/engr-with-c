#include <stdio.h>
#include <stdlib.h>
int main(void)
{	int k=0, i=0, die1=0, die2=0, eight=0;
	printf("How many times to throw a die?\n");scanf("%i",&k);
	for(i=0;i<k;i++)
	{	die1 = rand()%6+1; die2 = rand()%6+1;
		if(die1+die2==8)eight++;
	}
	printf("Eight was rolled %i time(s)\n",eight);
	return 0;
}
