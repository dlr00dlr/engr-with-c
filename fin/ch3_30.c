#include <stdio.h>

int main(void)
{	int max_found=0,k,lines;
	FILE *data;
	double time1,alt1,vel,acc;
	double time2,alt2,time3,alt3;

	data = fopen("rocket1.txt","r");
	if(data==0)printf("File Not Found\n");
	else
	{	fscanf(data,"%i",&lines);
		fscanf(data,"%lf %lf %lf %lf",&time1,&alt1,&vel,
				&acc);
		fscanf(data,"%lf %lf %lf %lf",&time2,&alt2,&vel,&acc);
		for(k=3;k<=lines;k++)
		{	fscanf(data,"%lf %lf %lf %lf",&time3,&alt3,&vel,&acc);
			if(alt2>alt1 && alt2>alt3)
			{	printf("Time til decent: %f \n",time2);
				max_found=1;break;
			}
			else
			{	alt1 = alt2; time1 = time2;
				alt2 = alt3; time2 = time3;
			}
		}
		if(max_found==0)
			printf("Not found\n");
		fclose(data);
	}
	return 0;
}
