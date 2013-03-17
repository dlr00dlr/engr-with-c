#include <stdio.h>
#include <stdlib.h>
int main(void)
{	int k, i, heads=0, tails=0;
	printf("How many times to toss a coin?\n");scanf("%i",&k);
	for(i=0;i<k;i++)
	{	if (rand()%2 == 1) heads++;
		else tails ++;
	}
	printf("Heads: %i Tails: %i",heads,tails);
	return 0;
}
