#include <stdio.h>
int main(void)
{	int event,p_event,task,days,max,project_days=0;
	FILE *data;
	data=fopen("path_data.txt","r");
	if(data==0)printf("File Not Found");
	else
	{	fscanf(data,"%i %i %i",&p_event,&task,&max);
		while (fscanf(data,"%i %i %i",&event,&task,&days)==3)
		{	if(event==p_event)
			{
				if(days>max)max=days;
			}
			else
			{	printf("%10i %10i\n",p_event,max);
				project_days += max;
				p_event=event; max=days;
			}
		}
		printf("%10i %10i\n",p_event,max);
		project_days += max;
		printf("Project Days: %i\n",project_days);
		fclose(data);
	}
	return 0;
}
