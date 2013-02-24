#include <stdio.h>
int main(void)
{	int event,p_event,task,days,count=1;
	FILE *data;
	data=fopen("path_data.txt","r");
	if(data==0)printf("File Not Found");
	else
	{	printf("Event # & # of Tasks:\n");
		fscanf(data,"%i %i %i",&p_event,&task,&days);
		while (fscanf(data,"%i %i %i",&event,&task,&days)==3)
		{	if(event==p_event)count++;
			else
			{	printf("%10i%10i\n",p_event,count);
				p_event=event; count =1;
			}
		}
		printf("%10i%10i",p_event,count);
		fclose(data);
	}
	return 0;
}
