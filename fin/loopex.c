#include <stdio.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) 
#endif

int main(void)
{

int n=3;int j;int i;

for(j=1;j<=n;j++){for(i=1;i<=j;i++)printf("*");printf("\n");}


	return 0;	
}