#include <stdio.h>
#include <stdlib.h>
int main(void)
{	int k=0, i=0, one=0, two=0, three=0, four=0, five=0, six=0, random=0;
	printf("How many times to throw a die?\n");scanf("%i",&k);
	for(i=0;i<k;i++)
	{	random = rand()%6;	
		switch(random)
		{	case 0:one++;break;
			case 1:two++;break;
			case 2:three++;break;
			case 3:four++;break;
			case 4:five++;break;
			case 5:six++;break;
		}
	}
	printf("One: %i\nTwo: %i\nThree: %i\nFour: %i\nFive: %i\nSix: %i\n",one,two,three,four,five,six);
	return 0;
}
