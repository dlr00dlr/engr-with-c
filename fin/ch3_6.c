#include <stdio.h>
#define FILENAME "sensor1.txt"

int main(void)
{
	int num_data_pts, k; double time, motion, sum=0, max, min;
	FILE *sensor;
	sensor = fopen(FILENAME,"r"); if (sensor == NULL) printf("Error opening input file\n");
		else { fscanf(sensor,"%d",&num_data_pts);
			for (k=1; k<=num_data_pts; k++) {fscanf(sensor,"%lf %lf",&time,&motion);
			if (k==1) max = min = motion; sum += motion;
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
