#include <stdio.h>
#include <stdlib.h>
int main(void)
{	char *s1, *s2;

	if ((s1 = (char *) malloc(80)) == NULL ||
	    (s2 = (char *) malloc(80)) == NULL)
		{printf("Fatal Memory Error \n");
			exit(1);
		}
	strcpy(s1, "Hello"); strcpy(s2, "Goodbye");
	strswap(&s1,&s2);
	printf("s1 is now %s. s2 is now %s.\n",s1,s2);
	return 0;
}

void strswap (char **s1, char **s2)
{	char *temp;
	temp = *s1;
	*s1  = *s2; 
	*s2  = temp;
}
