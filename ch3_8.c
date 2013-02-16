#include <stdio.h>
#define FILENAME "sensor3.txt"

int main(void)
{
	int num_data_pts=0; double time, motion, sum=0, max, min; FILE *sensor;
	sensor = fopen(FILENAME,"r"); if (sensor == NULL) printf("Error opening input file\n");
		else { while ((fscanf(sensor,"&lf &lf",&time,&motion)) == 1)
			{
			num_data_pts++; 
			if (num_data_pts == 1) max = min = motion; sum += motion;
			if (motion > max) max = motion;
		 	if (motion < min) min = motion;
			}
		printf("Number of sensor readings: 	%d \n",num_data_pts);
		printf("Average readings: 		%.2f \n",sum/num_data_pts);
		printf("Maximum readings: 		%.2f \n",max);
		printf("Minimum readings: 		%.2f \n",min);
		fclose(sensor);
		}
	return 0;
}
