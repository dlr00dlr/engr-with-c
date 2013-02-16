#include <stdio.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) 
#endif

main()
{
	int i;
	for (i = 0; i <= 100000; i++)
	{
		printf("\b|");
		sleep(1);
		printf("\b/");
		sleep(1);
		printf("\b-");
		sleep(1);
		printf("\b\\");
		sleep(1);
	}	
	return 0;	
}