#include <stdio.h>
int main(void)
{	int event,task,days;
	FILE *data;
	data=fopen("path_data.txt","r");
	if(data==0)printf("File Not Found");
	else
	{	printf("Event and Task # for projects longer than 5 days:\n");
		while (fscanf(data,"%i %i %i",&event,&task,&days)==3)
		{	if(days>5)
			{	printf("%10i %10i\n",event,task);
			}
		}
		fclose(data);
	}
	return 0;
}
